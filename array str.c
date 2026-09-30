#include <stdio.h>
int main(){
    char str[100];
    printf("enter the string:");
    fgets(str,strlen(str)-1,stdin);
    printf("%s",str);
    

}
 
