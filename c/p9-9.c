//编写如下函数，逆向显示字符串s的字符。
void rev_string(char s[]){
    int i,temp,size=1;
    int *j=s;
    while(j){
         
        size++;
        j++;
    }
    for(i=0;i<size;i++){
        temp=s[size-i];
        s[size-i]=s[i];
        s[i]=temp;

    }
    for(i=0;i<size;i++){
        printf("%d",s[i]);
        }
}