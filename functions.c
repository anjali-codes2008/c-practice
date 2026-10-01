//type-1 display the message 
/*#include <stdio.h>
void displayMessage(){
    printf("Hello, I am learning c functions!\n");
}
int main(){
    displayMessage();
    return 0;
}*/

// type-2 addition of two numbers
/*#include <stdio.h>
void add(int a, int b){
    printf("%d",a+b);
}
int main(){
    add(10,20);
    return 0;
}*/


// type-2 square of number
/*#include <stdio.h>
void square(int n){
    printf("%d\n",n*n);
}
int main(){
    square(5);
    return 0;
}*/

// type-3 
/*#include <stdio.h>
int getSquare(){
    int n=6;
    return n*n;
}
int main(){
    int result = getSquare();
    printf("%d\n",result);
    return 0;
}*/


// type -4
/*#include <stdio.h>
int square(int n){
    return n*n;
}
int main(){
    printf("%d\n",square(7));
    return 0;
}*/

//calculate sum
/*#include <stdio.h>
int calculateSum(int a, int b){
    return a+b;
}
int main(){
    printf("%d\n",calculateSum(4,6));
}*/

/*#include <stdio.h>
void printfwelcome(){
    printf("welcome to c programming");
}
int main(){
    printfwelcome();
}*/

//check even or odd
/*#include <stdio.h>
void checkevenorodd(int num){
    if (num%2==0){
        printf("even\n");
    }
    else{
        printf("odd\n");
    }
}
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    checkevenorodd(num);
    return 0;

}*/

/*#include <stdio.h>
int getten(){

    return 10;
}
int main(){
   int result=getten();
    printf("%d\n",result);
    return 0;

}*/

/*#include <stdio.h>
int findMaximun(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
}
}
int main(){
    int a,b,result;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);
    result=findMaximun(a,b);
    printf("maximum=%d\n",result);
    return 0;
}*/

/*#include <stdio.h>
void checkpositiveorneagtive(int num){
    if(num>0){
        printf("positive\n");
    }
    else if(num<0){
        printf("negative\n");
    }
    else {
        printf("zero\n");
    }
}
int main(){
    checkpositiveorneagtive(45);
    checkpositiveorneagtive(-98);
    checkpositiveorneagtive(0);
    return 0;
}*/

// takes no input calculate the sum from 1 to 10
// and returns to the main()
/*#include <stdio.h>
int sum(){
int sum=0,i;
for(i=1;i<=10;i++){
    sum=sum+i;
}
    return sum;
}
int main(){
    printf("%d",sum());
}*/

//take three integers find the largest and return the largest number to main().
/*#include <stdio.h>
int largest(int a,int b,int c){
    if(a>b&&a>c){
        return a;
    }
    else if(b>c && b>a){
       return b;
    }
    else{
        return c;
    }
}
int main(){
    int a,b,c;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);
    printf("enter the number:");
    scanf("%d",&c);
    printf("%d\n",largest(a,b,c));
    return 0;
}*/

/*#include <stdio.h>
int passorfail(int marks){
    if(marks>45){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);
    printf("%d\n",passorfail(marks));
}*/

/*#include <stdio.h>
int equal(int a,int b){
    if(a==b){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int a,b;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);
    printf("%d\n",equal(a,b));
}
*/

#include <stdio.h>
int multiply(int a ,int b);
int main(){
    int a,b,result;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);
    result=multiply(a,b);
    printf("%d\n",result);
}
int  multiply(int a ,int b){
    return a*b;
    
}


