#include<stdio.h>
#include<stdlib.h>
typedef struct mylist
{
    int data;
    struct mylist *next;
}node;
int main()
{

    node *f=(node*)malloc(sizeof(node));
    node *s=(node*)malloc(sizeof(node));
    node *t=(node*)malloc(sizeof(node));
    node *f4=(node*)malloc(sizeof(node));
    node *f5=(node*)malloc(sizeof(node));

    f->data=8;
    s->data=7;
    t->data=-2;
    f4->data=1;
    f5->data=9;

    f->next=s;
    s->next=t;
    t->next=f4;
    f4->next=f5;
    f5->next=NULL;


}


