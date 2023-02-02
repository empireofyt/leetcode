// 链式存储，两数相加 

#include<stdio.h>

// 单链表结点的数据结构 
typedef struct LNode
{
	int data;
	struct LNode *next;
} LNode, *LinkList;
 
void sum(LinkList *l1,LinkList *l2) 
{
	int num=0;//use it to show the result 
	int ret=0;//进位 
	LinkList *m=l1;
	LinkList *n=l2;
	while(m!=NULL||n!=NULL)
	{
		if(m==NULL)//l1为空，则结果只输出l2加进位 
		{
			num=(n->data)+ret;
			n=n->next;
		}
		else if(n==NULL)//l2为空，则结果只输出l1加进位 
		{
			num=m->data+ret;
			m=m->next;
		}
		else
		{
			num=m->data+n->data+ret;
			m=m->next;
			n=n->next;		
		}
		//进位的处理 
		if(num==10)
		{
			num=0;
			ret=1;
		}
		else	ret=0; 
		printf("%d",num);
	}
	if(ret!=0)	printf("%d",ret);
}

int main()
{
	LinkList *l1=NULL,*p1=l1;
	LinkList *l2=NULL,*p2=l2;
	//int num1=0,num2=0;//use for the length
	
	//l1,l2 data save
	while(getchar()!='\n')
	{
		scanf("%d",p1->data);
		p1=p1->next;
		num1++;
	}
	while(getchar()!='\n')
	{
		scanf("%d",p2->data);
		p2=p1->next;
		num2++;
	}
	//use it to sum the result of the two number
	sum(l1,l2);
	return 0;
}
