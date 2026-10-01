#include <stdio.h>
#include <string.h>
void readstring(char *str){
    printf("enter the string");
    fgets(str,100,stdin);
}
void printstring(char *str){
    printf("%s\n",str);
}
void lengthstring(char *str){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count=count+1;   
    }
    printf("%d\n",count);
}
void findvowels(char *str){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count=count+1;
        }
    }
    printf("%d\n",count);
}
void countconsonants(char *str){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
            if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'){
            count=count+1;
        }
    }
    }
    printf("%d\n",count);

}
void countspacesanddigits(char *str){
    int count=0;
    int count2=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='0'&&str[i]<='9'){
            count=count+1;
        }
        if(str[i]==' '){
            count2=count2+1;
        }
    }
    printf("%d\n",count);
    printf("%d\n",count2);


}
void reversestring(char *str){
int length=0,i;
    for(i=0;str[i]!='\0';i++){
        length=length+1;
    }
    for(i=length-1;i>=0;i--){
        printf("%c\n",str[i]);
}
  }
void pailndrome(char *str){
    int length=0;
    int pailndrome=1;
    int i,j;
    for(int i=0;str[i]!='\0';i++){
        length=length+1;
    }
    i=0;
    j=length-1;
    while(i<0){
        if(str[i]!=str[j]){
             pailndrome=0;
             break;
        }
        i++;
        j++;
    }
    if(pailndrome==1){
        printf("paindrome");
    }
    else{
        printf("not");
    }
    }

int main(){
    char str[100];
    readstring(str);
    printstring(str);
    lengthstring(str);
    findvowels(str);
    countconsonants(str);
    countspacesanddigits(str);
    reversestring(str);
    pailndrome(str);
    
}
