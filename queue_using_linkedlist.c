#include<stdio.h>
#include<stdlib.h>
struct student
{
    int data ;
    struct student *n;

};
struct student *front=NULL,*rear=NULL,*p;

void enqueue()
{
     p=(struct student*)malloc(sizeof(struct student));
     printf("Enter Data ");
     scanf("%d",&p->data);
     p->n=NULL;
    if(front==NULL&&rear==NULL)
    {


            front=p;
            rear=p;
    }
    else
    {
        rear->n=p;
        rear=p;
    }

}

void dequeue()
{
    if(rear==NULL||front==rear)
        printf("\nUnderflow ");
    else
    {
        p=front;
        front=front->n;
        free(p);
    }
}

void display()
{
struct student *temp=front;
while(temp!=rear)
{
   printf("%d ",temp->data);
   temp=temp->n;
}
printf("%d",temp->data);
}

int main()
{

    int ch=0;
    while(ch<4)
          {
              printf("\nEnter 1 to enqueue ");
              printf("\nEnter 2 to dequeue ");
              printf("\nEnter 3 to display ");
              printf("\nEnter 4 to exit ");
              printf("\nenter choice ");
              scanf("%d",&ch);

              if(ch==1)
                enqueue();
               else if(ch==2)
                dequeue();
               else if(ch==3)
                display();
          }
          return 0;
}
