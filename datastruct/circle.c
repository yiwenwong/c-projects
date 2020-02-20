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
    

}


int main(void){
    int SIZE,i;
    Node *head=(Node *)malloc(sizeof(Node));
    Node *pre=head;
    printf("元素个数为：");scanf("%d",&SIZE);
    head->ele=SIZE;

    for(i=0;i<SIZE;i++){
        pre=initNode(pre,i+1);
    }

}