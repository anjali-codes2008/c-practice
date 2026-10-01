#include <stdio.h>
#include <string.h>
int main(){
    //read and print string
   /* char str[100];
    printf("enter the string:");
    fgets(str,100,stdin);
    printf("%s",str);
    */

    //printing the each character using for loop
   /* char str[100];
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++){
        printf("%c\n",str[i]);
    }*/

    //finding the length without using strlen
    /*char str[100];
    int count=0;
    printf("enter the string");
    fgets(str,sizeof(str)-1,stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            break;

        }
         count=count+1;
    }
    printf("%d",count);*/

    //count no.of vowels in a string
   /*char str[100];
    int count=0;
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
        count=count+1;
        }
    }
    printf("%d\n",count);
    */
    //count the consonants
   /* char str[100];
    int count=0;
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
            if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'){
            count=count+1;
        }
    }
    }

    printf("%d\n",count);*/

    //count the no.of digits and spaces in a string
    /*char str[100];
    int count=0, count2=0;
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='0'&&str[i]<='9'){
            count=count+1;
        }
        if(str[i]==' '){
            count2=count2+1;
        }
    }
    printf("%d\n",count);
    printf("%d\n",count2);*/


    //count the upper alphabets and lower alphabets
    /*char str[100];
    int upper=0,lower=0;
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=65&&str[i]<=90){
            upper=upper+1;
        }
        else if (str[i]>=97&&str[i]<=122){
            lower=lower+1;
        }

    }
    printf("%d\n",upper);
    printf("%d\n",lower);
    */

    //compare two strings
   /* char str1[100];
    char str2[200];
    int different=0;
    printf("enter the string:");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the another string:");
    fgets(str2,sizeof(str2),stdin);
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]!=str2[i]){
            different=1;
            break;
        }
    }
    if(different==1){
        printf("these are different strings");
    }
    else{
        printf("these are same");
    }
    */
   //compare two strings by using strcmp
    /*char str1[100];
    char str2[200];
    int different=0;
    printf("enter the string:");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the another string:");
    fgets(str2,sizeof(str2),stdin);
    str1[strcspn(str1, "\n")='\0;
    str2[strcspn(str2, "\n")='\0';
    if(strcmp(str1,str2)==0){                 // strcmp return 0 if both are equal
        printf("same strings");
    }
    else{
        printf("not equal");
    }
        */
    
     //copy the one string into another string 
   /* char str1[100];
    char str2[200];
    int i;
    printf("enter the string:");
    fgets(str1,sizeof(str1),stdin);
    while(str[1]!='\0){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("original: %s\n",str1);
    printf("copied: %s\n",str2);
   }
    */

    //copy the string using method
    /*char str1[100];
    char str2[200];
    int i;
    printf("enter the string:");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1, "\n")]='\0';
    strcpy(str2,str1);
    printf("original: %s\n",str1);
    printf("copied: %s\n",str2);
    */

    //concatenate a string 
    /*char str1[100];
    char str2[200];
    int i=0,j=0;
    printf("enter the string:");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the another string:");
    fgets(str2,sizeof(str2),stdin);
    str1[strcspn(str1, "\n")]='\0';
    str2[strcspn(str2, "\n")]='\0';
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!=0){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("%s\n",str1);
    */

    //concatenate string using method
    /*char str1[200];
    char str2[200];
    printf("enter the string:");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the string:");
    fgets(str2,sizeof(str2),stdin);
    str1[strcspn(str1, "\n")]='\0';
    str2[strcspn(str2, "\n")]='\0';
    strcat(str1,str2);
    printf("%s\n",str1);
*/


/*char names[3][20];
for(int i=0;i<3;i++){
    printf("enter name:%d",i+1);
    fgets(names[i],sizeof(names[i]),stdin);
}
printf("names are:\n");
for(int i=0;i<3;i++){
    printf("%s",names[i]);
}
*/

/*char names[3][20];
int count=0,i;
char smallest_string[20];
int smallest_length=0;
for(int i=0;i<3;i++){
    printf("enter name:%d",i+1);
    fgets(names[i],sizeof(names[i]),stdin);
    names[i][strcspn(names[i], "\n")]='\0';
}
printf("\nnames are:\n");
strcpy(smallest_string,names[0]);
smallest_length=strlen(names[0]);
for(int i=0;i<3;i++){
    count=0;
    for(int j=0;names[i][j]!='\0';j++){
        printf("%c",names[i][j]);
        count=count+1;
    }
    printf("\n");
    if (count<smallest_length){
        strcpy(smallest_string,names[i]);
        smallest_length=count;
    }
}
printf("%s",smallest_string);
printf("\n%d\n",smallest_length);
*/

char names[3][20];
char string[10];
int found=0;
int count=0;
for(int i=0;i<3;i++){
printf("enter the names:%d",i+1);
fgets(names[i],sizeof(names[i]),stdin);
names[i][strcspn(names[i], "\n")]='\0';
}
for(int i=0;i<3;i++){
    printf("%s\n",names[i]);
}
printf("enter the string to be found:");
scanf("%s",string);
for(int i=0;i<3;i++){
   if(strcmp(string,names[i])==0){
    count=count+1;
   }
}
printf(" %s :%d",string,count);



}








 
