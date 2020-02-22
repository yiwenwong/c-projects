//编写如下函数，删除字符串str内的所有数字字符。
void del_digit(char *str) { 
    char *temp=str;
    while(*temp){
        if(*temp<=9&&*temp>=0){
             while(*temp){
                 *temp=*(temp+1);
                 temp++;
             }
             temp=str;
        }
        temp++;
    }
 }