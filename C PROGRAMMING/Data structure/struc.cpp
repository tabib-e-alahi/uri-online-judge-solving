#include<stdio.h>
#include<stdlib.h>
struct Node
{
int x,y,pt;
struct Node *next;
};
typedef struct Node node;
int main()
{
node *head;
head=(node*)malloc(sizeof(node));
head->x=10;
head->y=15;
head->pt=NULL;
printf("%d %d\n",head->x,head->y);
return 0;
}
