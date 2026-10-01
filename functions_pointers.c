/*#include <stdio.h>
void swap(int *p,int *q){
    int temp =*p;
    *p = *q;
    *q = temp;
}
int main(){
    int a ,b;
    printf("enter the numbers:");
    scanf("%d",&a);
    printf("enter the number");
    scanf("%d",&b);
    printf("a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d b=%d\n",a,b);
}*/
//calculate the sum and differences
/*#include <stdio.h>
void sum(int *p ,int *q){
    printf("%d\n",*p + *q);   
}
void difference(int *p ,int *q){
    printf("%d\n",*p - *q);
}
int main(){
    int num1,num2;
    printf("enter the num1:");
    scanf("%d",&num1);
    printf("enter the num2:");
    scanf("%d",&num2);
    sum(&num1,&num2);
    difference(&num1,&num2);
   
}*/
/*#include <stdio.h>
void sumanddifference(int *p ,int *q){
    printf("%d,%d\n",*p +*q,*p-*q);
}
int main(){
    int num1=20;
    int num2=8;
    sumanddifference(&num1,&num2);
}*/

//swap and sum 
/*#include <stdio.h>
void swapandsum(int *p ,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
    printf("%d,%d\n",*p,*q);
    printf("%d\n",*p+*q);
}
int main(){
    int num1,num2;
    num1=10;
    num2=20;
    swapandsum(&num1,&num2);
}*/

// create a function that receies three integers using pointers and does all three
//1.find the largest 2.find the smallest 3.sum
#include <stdio.h>
void findmaxminsum(int *p,int *q,int *r){
    if(*p >*q && *p>*r)
        printf("%d is largest\n",*p);
    else if(*q >*p && *q>*r){
         printf("%d is largest\n",*q);
    }
    else{
         printf("%d is largest\n",*r);
    }
    if(*p <*q && *p<*r){
        printf("%d is smallest\n",*p);
    }
    else if(*q <*p && *q<*r){
        printf("%d is smallest\n",*q);

    }
    else{
        printf("%d is smallest\n",*r); 

    }
    printf("%d\n",*p+*q+*r);
}
int main(){
    int num1=10;
    int num2=20;
    int num3=30;
    findmaxminsum(&num1,&num2,&num3);
}
