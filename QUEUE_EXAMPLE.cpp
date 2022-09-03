#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define max 3
int queue_arr[max];
int rear= -1;
int front= -1;
void insert(int item );
int del();
int peek();
void display();
int isfull();
int isempty();
int main()
{
int item;
char choice;
while(1)
{
printf("1.insert\n");
printf("2.delete\n");
printf("3.dislay element at the front\n");
printf("4.dislay all element of the queue\n");
printf("5.quit\n");
printf("Enter your choice :  ");
scanf("%c",&choice);
fflush(stdin);
if(choice == '1')
{
printf("input the element for adding in queue  :  ");
scanf("%d",&item );
fflush(stdin);
insert(item);
}
if(choice =='2')
{
item=del();
printf("delet element is %d\n",item );
}
if(choice =='3')
{
printf("element at the front is %d\n",peek());
}
if(choice =='4')
{
display();
}
if(choice =='5')
{
	exit(1);
}
if(choice<'1' || choice>'5')
	{
		printf("\nwrong choice\n");
		continue;
	}
}
return(0);
}
void insert(int item )
{

   
if(isfull())
      {
printf("queue overflow\n ");
          return;
      }
   
if(front== -1)
{
 front=0;
}
 
rear=rear+1;
queue_arr[rear]=item ;
   
}
int del()
{
int item ;
if(isempty())
{
printf("queue underflow\n");
exit(1);
    }  
item=queue_arr[front];
front=front+1;
return item;
}
int peek()
{
   if(isempty())
       {
        printf("queue underflow\n");
        exit(1);
  }
 return queue_arr[front];

}
int isempty()
{
if(front==-1 || front==rear+1)
    return 1;
else
  return 0;
}
int isfull()
{
 
   if(rear==max-1)
      return(1) ;
  else
     return (0);
   
}
void display()
{
int i;
if(isempty())
{
printf("queue is empty\n");
return;
}
    printf("queue is :\n\n");
    for(i=front;i<=rear;i++)
          printf("%d  ",queue_arr[i]);
     printf("\n\n");
}
