#include"link_p.c"
#include"stack_p.c"
#include<string.h>
void main()
{
	st2 *ptr;
	st1 *ptr2;
	st1 *top1=NULL;
	st2 *top2=NULL;
	int i,j,n,k,count=0;
	char s[20],l[20];
	N *temp;
	create();
	printf("--------------------------WELCOME TO ONLINE SHOPPING-----------------------\n");
	printf("List of products are:\n");
	display();
	do
	{
		printf("Press \n\t1: Visit The Products.\n\t2: View Products In The Cart\n\t3: Delete Products From The Cart\n\t4: See The Last Visited Product Name\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:		printf("------Let's Visit The Product--------\n");
						printf("-----You Cannot Add More Than One Product In Your Cart-----\n");
						temp=start;
						printf("first product:");
						do
						{		
							printf("%s %d\n",temp->nm,temp->pr);
							strcpy(s,temp->nm);
							top1=push1(top1,s);
							printf("add it into the cart(1/0):");
							scanf("%d",&j);
							if(j==1)
							{
								count+=1;
								strcpy(l,s);
								if(count<=1)
								{
									top2=push2(top2,l);
								}
								else
									printf("You Have Exceeded The Number Of Products In Your Cart And Now You Cannot Add More Products Into The Cart\n");
							}
							printf("do you want to see next product(1/0):");
							scanf("%d",&i);
							if(i==1)
							{
								printf("Next Product:\n");
								temp=temp->next;
							}	
						}while(i==1 && temp!=NULL);
						break;
			case 2:		printf("-------Product In Your Cart--------\n");
						top2=cdisplay(top2);
						ptr=top2;
						break;
			case 3:		printf("------Deletion Of Product From Cart-------\n");
						top2=pop2(top2);
						if(top2==NULL)
							printf("Your Cart Is Empty\n");
						break;
			case 4:		printf("last visited product is:\n");
						top1=pop(top1);
						break;
			default:	printf("Wrong Input\n");
		}
		printf("Do You Want To Go To Top Of The Page(1/0):\n");
		scanf("%d",&k);
	}while(k==1);
}
