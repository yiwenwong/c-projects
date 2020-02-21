#include<stdio.h>
#include<stdlib.h>

typedef struct node{
     int ele;
     struct node *next;
}Node;

Node *initNode(Node *pre,int ele){
    Node *node=(Node *)malloc(sizeof(Node));
    node->ele=ele;
    node->next=NULL;
    pre->next=node;
    return node;
}
void display(Node *p){
    Node *temp=p;
    printf("有%d个元素",temp->ele);
    while(temp->next){
        temp=temp->next;
        printf(" %d",temp->ele);
    }
    temp->next=p->next;//循环链表
printf("\n");

}

void joseph(Node *p,int d,int SIZE){
    Node *temp=p;
    int count=0,count1=0;
    while(count1<SIZE){
         count++;
        temp=temp->next;
          
        if(count==d-1){
             count1++;
         Node *del=temp->next;
          printf(" %5d ",del->ele);
         temp->next=del->next;
         free(del);
         del=NULL;
         p->ele--;
         count=0;
        }  
    }
    printf("\n");
}

int main(void){
    int SIZE,i,dead;
    Node *head=(Node *)malloc(sizeof(Node));
     
    printf("人数为：");scanf("%d",&SIZE);
    head->ele=SIZE;
    printf("第几个去世：");scanf("%d",&dead);
     Node *pre=head;

    for(i=0;i<SIZE;i++){
        pre=initNode(pre,i+1);
    }
    display(head);
     joseph(head,dead,SIZE);
     return 0;
}