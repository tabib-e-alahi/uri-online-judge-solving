#include<stdio.h>
#include<stdlib.h>
typedef struct node Node;
struct node
{
    int data;
    Node *next;
};
Node *create_node(int item,Node *next)
{
    Node *new_node=(Node*)malloc(sizeof(Node));
    if(new_node==NULL){
        printf("Error\n");
        exit(1);
    }
    new_node->data=item;
    new_node->next=next;
    return new_node;
}
Node *prepend(Node *head,int item)
{
    Node *new_node=create_node(item,head);
}
int main()
{
    int ar[]={2,3,4,5,6};
    int item=8;

    Node *item;
    head=prepend(head,item);
    for(int i=0;i<6;i++){
        printf("%d ",ar[i]);
    }

}
