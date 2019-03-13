#include<stdio.h>
#include<stdlib.h>
struct node
{   int info;
    struct node *link;
};
struct node *START = NULL;
struct node* createNode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return (n);
}
 void insertNode()
 {
     struct node *temp,*t,*p;
     temp=createNode();
     printf("enter a number ");
     scanf("%d",&temp->info);
     temp->link=NULL;
     if(START==NULL)
        {
            START=temp;
        }
     else
     {
         while(t->link!=NULL)
            t=t->link;

          t->link=temp;
     }
 }
  void deleteNode()
  {
      struct node* r;
     if(START==NULL)
        printf("list is empty");
        else
            {


      r=START;
      START=START->link;
      free(r);

     }
  }
     void displayList()
     {
         struct node *t;
         if(START==NULL)
            printf("list is empty");
         else
         {
             t=START;
             while(t!=NULL)
                printf("%d",&t->info);
             t=t->link;
         }
     }
     int menu()
     {
         int ch;
         printf("\nAdd value to the list ");
         printf("\ndelete a value");
         printf("\nDisplay list");
         printf("\nExit");
         printf("enter your choice");
         scanf("%d",&ch);
         return (ch);
     }
     void main()
     {
         while(1)
         {
             switch(menu())
             {
             case 1:
                 insertNode();
                 break;

             case 2:
                 deleteNode();
                 break;
             case 3:
                 displayList();
                 break;

             case 4:
                 exit(0);

             default:
                printf("inavlid choice");

             }
         }
     }


