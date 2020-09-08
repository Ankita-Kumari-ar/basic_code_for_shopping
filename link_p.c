#include<stdio.h>
#include<stdlib.h>
struct node
{
	char nm[30];
	int pr;
	struct node *next;
};
typedef struct node N;
N *start=NULL;
N *tail=NULL;
void create()
{
	N *ptr;
	int ch;
	do
	{
		ptr=(N *)malloc(sizeof(N));
		printf("enter product name:");
		scanf("%s",&ptr->nm);
		printf("enter product cost:");
		scanf("%d",&ptr->pr);
		if(start==NULL)
			start=tail=ptr;
		else
		{
			tail->next=ptr;
			tail=ptr;
		}
		printf("do you add more product(1/0):");
		scanf("%d",&ch);
	}while(ch==1);
	tail->next=NULL;
}
void display()
{
	N *temp;
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		printf("%s %d\n",temp->nm,temp->pr);
	}
}
