#include<stdio.h>
#include<stdlib.h>
#include<string.h>        //reverse in group of k nodes
struct node
{
  int data;
  struct node *next;
};
struct node * create()
{
  struct node *temp,*start=NULL,*q,*p,*r,*t;
while(1)
{
char str1[10];
printf("\n Enter yes or no\n");
scanf("%s",str1);
if(strcmp(str1,"no")==0)
break;
else
{
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter a value ");
scanf("%d",&temp->data);
  temp->next=NULL;
  if(start==NULL)
  {
    start=temp;
    p=temp;
    q=temp;
  }
  else
  {
    p->next=temp;
    p=temp;
  }
}
}
return q;
}
struct node *reverse(struct node *p,int k)
{
  struct node *q=p,*r,*s,*t,*temp;
  for(int i=1;i<k-1;i++)
  {
    p=p->next;
  }
  s=p;
  t=p->next;
  r=p->next->next;
  temp=r;
  p->next=NULL;
  while(r->next!=NULL)
  {
    r=r->next;
  }
  r->next=t;
  t->next=q;
  return temp;
}
void display(struct node * p)
{
  while(p!=NULL)
  {
    printf("%d\n",p->data);
  p=p->next;
  }
}
int main()
{
struct node *p,*q;
p=create();
int k;
printf("\n Enter value of k  ");
scanf("%d",&k);
q=reverse(p,k);
display(q);
}
