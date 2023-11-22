#include<stdio.h>
#include<malloc.h>
typedef struct node{
  int data;
  struct node *next;
}s;

void printlist(struct node * n){
    while(n!=NULL){
        printf("%d ",n->data);
        n=n->next;
    }
}
int main(){
s *head = (struct node *)malloc(sizeof(struct node));
s *second =(struct node *)malloc(sizeof(struct node));
s *third =(struct node *)malloc(sizeof(struct node));
s *fourth =(struct node *)malloc(sizeof(struct node));
s *fifth =(struct node *)malloc(sizeof(struct node));
head->data =2;
head->next =second;

second ->data =4;
second->next =third;

third->data =6;
third->next =fourth;

fourth->data =19;
fourth->next =fifth;

fifth->data=23;
fifth->next=NULL;

printf("printing the elements of the linked list is :");
printlist(head);
    return 0;
}