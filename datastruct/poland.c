#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

typedef struct node {
    int data;
    struct node *next;
} NodeStack;

/*入栈*/
NodeStack *push(NodeStack *top, int a) {
    NodeStack *add = (NodeStack *)malloc(sizeof(NodeStack));
    add->data = a;
    add->next = top;
    printf("入栈元素：%d\n", a);
    top = add;
    return top;
}

/*出栈*/
NodeStack *pop(NodeStack *top) {
    if (top == NULL) {
        printf("\n");
        return top;
    } else {
        NodeStack *delete = top;
        printf("出栈元素：%d   ", delete->data);
        top = delete->next;

        if (top != NULL) {
            printf("新栈顶元素：%d\n", top->data);
        } else {
            printf("栈已空\n");
        }

        free(delete);
        delete = NULL;
        return top;
    }
}

int main() {
    NodeStack *top = NULL;
    char x;
    int i,n1,n2,r;
    for(i=0;i<5;i++){
        scanf("%c",&x);
    if(x>='0'&&x<='9')
     top = push(top, atoi(x));
    
    
    if(x=='+'||x=='-'||x=='*'||'/'){
        n2 = pop(top);
        n1 = pop(top);
     switch(x){
         case '+':r=n1+n2;break;
         case '-':r=n1-n2;break;
         case '*':r=n1*n2;break;
         case '/':r=n1/n2;break;
     }
     top = push(top, r);
         
    }
    }
    printf("%d",r);

    return 0;
}