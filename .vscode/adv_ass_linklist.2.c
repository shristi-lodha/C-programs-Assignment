#include<stdio.h>
#include<malloc.h>
typedef struct node {
    int data;
  struct node *next;

}s;
 
void printlist(s *n,int a){
    s *n;
    while(n[a]!=NULL){
        printf("%d ",n[a]->data);
        n[a]=n[a]->next;
    }
}
s* func(int i){
   s *new[i];
    new[i] =(s*)malloc(sizeof(s));
    printf("enter the data : ");
    scanf("%d",&new[i]->data);
    new[i]->next =new[i+1];
    return new[i];

}
int main(){
   int num;
 
          printf("how many nodes you want in linklist :");
          scanf("%d",&num);
          s *n[num];
          for(int i=0;i<num;i++){
            n[i] = func(i);
          }
          printlist(n[0],num);
    return 0;

}