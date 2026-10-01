
//1. read and print a string
/*#include <stdio.h>
int main(){
    char str[50];
    printf("enter your name:");
    scanf("%s",str);

    printf("you name: %s",str);
    return 0;

}*/

//2. print each character using loop
/*#include <stdio.h>
int main(){
char name[20];
printf("enter your name:");
scanf("%s",name);
int i;
for(i=0;name[i]!='\0';i++){
    printf("%c\n",name[i]);
}
}*/

//3. find the string length without sizeof operator
/*#include <stdio.h>
int main(){
    char str[50];
    int i,length=0;
    printf("enter your name:");
    scanf("%s",str);
    for(i=0;str[i]!=0;i++){
        length=length+1;
    }
    printf("length=%d",length);
}*/

// 4.count vowels
/*#include <stdio.h>
int main(){
    char str[50];
    printf("enter your name:");
    scanf("%s" ,str);
    int i,count=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='u'){
            count=count+1;
        }
    } printf("number of vowels =%d\n",count);

}*/

//5.count consonants
/*#include <stdio.h>
int main(){
    char str[50];
    printf("enter your name:");
    scanf("%s",str);
    int i,count=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='u'){
            count=count+1;
        }
    } printf("number of consonants =%d\n",count);

}*/

//6.counting digits
/*#include <stdio.h>
int main(){
    char str[50];
    printf("enter your name:");  
    scanf("%s",str);
    int i,count=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='0' && str[i]<='9'){
            count=count+1;
        }
    }
    printf("no.of digits %d:\n",count);
}*/

//7.count spaces
/*#include <stdio.h>
int main(){
    char str[50];
    printf("enter your name");
    fgets(str,sizeof(str),stdin);
    int i,count=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            count=count+1;
        }
    }
    printf("no.of spaces:%d",count);
}*/


//8. count of upper letters and lower letters
/*#include <stdio.h>
int main(){
    char str[50];
    printf("enter your name:");
    fgets(str,sizeof(str),stdin);
    int i,upper,lower;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>=65 && str[i]<=90){
            upper=upper+1;
        }
        else{
            if(str[i]>=97 && str[i]<=122){
                lower=lower+1;
            }
        }
    }
    printf("upper letter: %d\n",upper);
    printf("lower letters:%d\n",lower);
}*/

//9.all above programs in one program // error because consonants are printing wrong
/*#include <stdio.h>
int main(){
    char str[100];
     int length=0,vowels=0,consonants=0,digits=0,spaces=0,uppercase=0,lowercase=0,i;
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        length=length+1;
        if(str[i]>='A' && str[i]<='Z')
            uppercase=uppercase+1;
        if(str[i]>='a' && str[i]<='z')
            lowercase=lowercase+1;
        if(str[i]>='0' && str[i]<='9')
            digits=digits+1;
        if(str[i]==' ')
            spaces=spaces+1;
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='u'){
            vowels=vowels+1;
        }
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='u'){
            consonants=consonants+1;
      }

    }

printf("length=%d\n",length);
printf("vowels=%d\n",vowels);
printf("consonants=%d\n",consonants);
printf("digits=%d\n",digits);
printf("spaces=%d\n",spaces);
printf("uppercase=%d\n",uppercase);
printf("lowercase=%d\n",lowercase);


}*/

//10.reverse a string
/*#include <stdio.h>
int main(){
    char str[20];
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    int length=0,i;
    for(i=0;str[i]!='\0';i++){
        length=length+1;
    }
    for(i=length-1;i>=0;i--){
        printf("%c",str[i]);
}
}*/

//11.check palindrome 
/*#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    int i,j,length=0;
    int pailndrome=1;
    for(i=0;str[i]!='\0';i++){
        length=length+1;
    }
    i=0;
    j=length-1;
    while(i<j){
        if(str[i]!=str[j]){
            pailndrome=0;
            break;
        }
        i=i+1;
        j=j-1;
    }
    if(pailndrome==1){
        printf("palindrome\n");
    }
    else{
        printf("not palindrome:\n");
    }
           
    }*/
    


//12.copy a string 
/*#include <stdio.h>
int main(){
    char str1[50],str2[50];
    int i;
    printf("enter the string:");
    scanf("%s",str1);
    for(i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
    str2[]='\0';
    printf("original string:%s\n",str1);
    printf("copy string:%s\n",str2);
}    */
    

//13.compare two strings
/*#include <stdio.h>
int main(){
    char str1[50],str2[50];
    int i,same;
    printf("enter the string:");
    scanf("%s",str1);
    printf("enter the string:");
    scanf("%s",str2);
    same=1;
    for(i=0;str1[i]!='\0';i++){
        if(str1[i]!=str2[i]){
        same=0;
        break;
    }
}

    if(same==0){
        printf(" not same strings");

    }
    else{
        printf(" same strings");
    }
}*/

//14.concatenate two strings
/*#include <stdio.h>
int main(){
    char str1[50],str2[50];
    int i,j;
    printf("enter the string:");
    scanf("%s",str1);
    printf("enter string:");
    scanf("%s",str2);
    for(i=0;str1[i]!='\0';i++){
    }
        for(j=0;str2[j]!='\0';j++){
            str1[i]=str2[j];
            i++;
        }
        str1[i]!=0;

    printf("%s\n",str1);
    }*/

    //15.find the frequency of a character
    
    

        