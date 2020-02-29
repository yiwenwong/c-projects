#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(void){
    int a[8]={0,1,2,3,4,5,6,7};
    int p,temp,i,j=7;
    srand(time(NULL));
    for(i=0;i<8;i++){
    p=rand()%(j+1);
    temp=a[j];
    a[j]=a[p];
    a[p]=temp;
    printf("%d ",a[j]);
    j--;
    }
    printf("\n");
    return 0;
}