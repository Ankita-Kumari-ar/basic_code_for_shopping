#include<stdio.h>
#include<stdlib.h>
struct stack1
{
	char *s1;
	struct stack1 *next1;
};
struct stack2
{
	char *s2;
	struct stack2 *next2;
};
typedef struct stack1 st1;
typedef struct stack2 st2;
st1 *push1(st1 *top1,char *n)
{
	st1 *ptr1;
	ptr1=(st1 *)malloc(sizeof(st1));
	ptr1->s1=n;
	if(top1==NULL)
	{
		ptr1->next1=NULL;
		top1=ptr1;
	}
	else
	{
		ptr1->next1=top1;
		top1=ptr1;
	}
	return top1;
}
st2 *push2(st2 *top2,char *n)
{
	st2 *ptr;
	ptr=(st2 *)malloc(sizeof(st2));
	ptr->s2=n;
	if(top2==NULL)
	{
		ptr->next2=NULL;
		top2=ptr;
	}
	else
	{
		ptr->next2=top2;
		top2=ptr;
	}
	return top2;
}
st1 *pop(st1 *top1)
{
	st1 *ptr;
	char *p;
	ptr=top1;
	if(top1==NULL)
	{
		printf("no elements:\n");
	}
	else
	{
		top1=top1->next1;
		p=ptr->s1;
		printf("%s\n",p);
		free(ptr);
		
	}
	return top1;
}
st2 *cdisplay(st2 *top2)
{
	st2 *ptr;
	ptr=top2;
	if(top2==NULL)
	{
		printf("No Items In Your Cart\n");
	}
	else
	{
		for(ptr;ptr!=NULL;ptr=ptr->next2)
			printf("%s\n",ptr->s2);
	}
	return top2;
}
st2 *pop2(st2 *top2)
{
	st2 *ptr;
	char *p;
	ptr=top2;
	if(top2==NULL)
	{
		printf("Your Cart Is Empty:\n");
	}
	else
	{
		top2=top2->next2;
		p=ptr->s2;
		printf("Removed Product From Cart Is %s\n",p);
		free(ptr);
		
	}
	return top2;
}
