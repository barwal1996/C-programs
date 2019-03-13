#include<stdio.h>
struct linklist
{
    int data,opr,flag;
    struct linklist *next;
};
struct linklist *f=NULL,*r=NULL,*top=NULL,*p,*tp,*i,*top1=NULL;
void insert(int d,int e)
{
    p=(struct linklist *)malloc(sizeof(struct linklist));
    p->next=NULL;
    p->data=d;
    p->opr=0;
    p->flag=0;
    if(r==NULL)
    {
        f=p;
        r=p;
        printf("\n Data inserted");
    }
    else if(p->data<f->data)
    {
        p->next=f;
        f=p;
        printf("\nData inserted");
    }
    else if(p->data>r->data)
    {
        r->next=p;
        r=p;
        printf("\nData inserted");
    }
    else
    {
        tp=f;
        i=tp->next;
        while(i!=NULL)
        {
            if((p->data>=tp->data)&&(p->data<i->data))
            {
                tp->next=p;
                p->next=i;
                printf("\nData inserted");
                break;
            }
            tp=tp->next;
            i=i->next;
        }
    }
if(e!=0)
{
undostack(d,e,0);
top1=NULL;
}

//else
//    udisplay();
}
void undostack(int n,int m,int dflag)
{
    p=(struct linklist *)malloc(sizeof(struct linklist));
    p->data=n;
    p->opr=m;
    p->flag=dflag;
    p->next=NULL;
    if(top==NULL)
    {
        top=p;
    }
    else
    {
        p->next=top;
        top=p;
    }
    //udisplay();
}
void udisplay()
{
    printf("\nundo-stack");
    p=top;
    while(p!=NULL)
    {
        printf("\ndata=%d\nopr=%d\nflag=%d",p->data,p->opr,p->flag);
        p=p->next;
    }
}
void delete(int n,int q)
{

    int dflag=0;
    if(r==NULL)
        printf("\nunderflow");
    else if(f==r)
    {
        if(n==r->data)
        {
            p=f;
            f=r=NULL;
            free(p);
            dflag=1;
            printf("\ndeleted1");
        }
        else
        {
            printf("\ndata not found");
        }
    }
    else if(n==f->data)
    {
        p=f;

        f=p->next;
        free(p);
        dflag=1;
        printf("\ndeleted");
    }
    else
    {
        p=f;
        tp=p->next;
        while(tp!=NULL)
        {
            if(n==tp->data)
            {
                p->next=tp->next;
                free(tp);
                if(p->next==NULL)
                {
                    r=p;
                    //printf("\nr found");
                }
                dflag=1;
                printf("\ndeleted");
                break;
            }
            p=p->next;
            tp=tp->next;
        }
    }
if(dflag==0)
    printf("\n No data found");
if(q!=0)
{
    undostack(n,q,dflag);
    top1=NULL;
}

//else
//udisplay();
}
void undo()
{
    int r,s,fg;
    fg=top->flag;
    r=top->data;
    s=top->opr;
    p=top;
    top=p->next;
    free(p);
    if((s==2)&&(fg==1))
    {
       insert(r,0);
       redostack(r,s);
    }

    if(s==1)
    {
        delete(r,0);
        redostack(r,s);
    }
    printf("\nUNDO Successfully");
}
void redo()
{
    int a,b;
    if(top1==NULL)
        printf("\nnothing-to-redo");

    else
    {
        a=top1->data;
        b=top1->opr;
        p=top1;
        top1=p->next;
        free(p);
        if(b==1)
            insert(a,0);
        if(b==2)
            delete(a,0);
        printf("\nREDO Successfully");
    }

}
void redostack(int r,int s)
{

     p=(struct linklist *)malloc(sizeof(struct linklist));
    p->data=r;
    p->opr=s;
    p->next=NULL;
    if(top==NULL)
    {
        top1=p;
    }
    else
    {
        p->next=top1;
        top1=p;
    }
    //redodisplay();
}
void redodisplay()
{
    printf("\nredo-stack");
    p=top1;
    while(p!=NULL)
    {
        printf("\ndata=%d\nopr=%d",p->data,p->opr);
        p=p->next;
    }
}
void display()
{
    p=f;
    while(p!=NULL)
    {
        printf("\ndata=%d",p->data);
        p=p->next;
    }
}
void main()
{
    int c=0,a,b;
    while(c<7)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Undo\n5. redo\n6. Exit\n");
        printf("enter your choice ");
        scanf("%d",&c);
        if(c==1)
        {
            printf("\nenter data ");
            scanf("%d",&a);
            insert(a,c);
        }

        else if(c==2)
        {
            printf("\nenter data ");
            scanf("%d",&a);
            delete(a,c);
        }

        else if(c==3)
            display();
        else if(c==4)
            undo();
        else if(c==5)
            redo();
        else if(c==6)
            break;
        else
            printf("\nwrong choice");
    }
}
