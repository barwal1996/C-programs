#include<stdlib.h>
#include<stdio.h>
struct queue
{
    int data;
    struct queue *n;
};
struct queue *front=NULL,*rear=NULL;

void enqueue()
{
    struct queue *p= (struct queue *)malloc(sizeof(struct queue));
    printf("enter data");
    scanf("%d",&p->data);
    p->n= NULL;

    if(rear==NULL)
        front=rear=p;
    else{
        p->n=rear;
        rear=p;

    }
}

void dequeue()
{

    if(rear==NULL)
        printf("underflow");
    else if(front==rear)
    {
        free(rear);
        front=rear=NULL;

    }
    else
    {
        struct queue *temp =rear;
        rear=rear->n;
        free(temp);
    }
}

void display()
{

    struct queue *temp=rear;
    if(rear==NULL)
        printf("underflow");
    else
    {
        while(temp!=front)
        {
            printf("%d",temp->data);
            temp=temp->n;

        }
        printf("%d",temp->data);

    }
}
int main()
{
    int ch=0;
    while(ch<4)
    {

        printf("\n1.ENQUEUE THE ELEMENT");
        printf("\n2.DEQUEUE THE ELEMENT:");
        printf("\n3.DISPLAY THE ELEMENT ");
        printf("\n4.EXIT");
        printf("\nenter your choice ");
        scanf("%d",&ch);
        if(ch==1)
            enqueue();
        if(ch==2)
            dequeue();
        if(ch==3)
            display();
        if(ch==4)
            exit(0);
        if(ch>4)
            printf("invalid choice ");

    }
            return 0;

}
