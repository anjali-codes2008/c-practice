/*#include<stdio.h>
int main(){
    int i,j;
    int a[3][3];
    printf("enter the numbers:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}*/

// 2d array input from user
/*#include <stdio.h>
int main(){
    int rows,columns,i,j;
    printf("enter the no.of rows:");
    scanf("%d",&rows);
    printf("enter the no.of columns:");
    scanf("%d",&columns);
    int a[rows][columns];
    printf("enter the elements:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}*/



//sum pf 2d_array
/*#include <stdio.h>
int main(){
    int rows,columns,i,j,sum=0;
    printf("enter the no.of rows:");
    scanf("%d",&rows);
    printf("enter the no.of columns:");
    scanf("%d",&columns);
    int a[rows][columns];
    printf("enter the elements:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("printing matrix\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%d ",a[i][j]);
        }
    }
    printf("\n");
    printf("sum of elements:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            sum=sum+ a[i][j];
        }
        printf("\n");
    }
    printf("%d\n",sum);
    
}*/

//finding the largest element
/*#include <stdio.h>
int main(){
    int rows,columns,i,j,largest;
    printf("enter the no.of rows:");
    scanf("%d",&rows);
    printf("enter the no.og columns:");
    scanf("%d",&columns);
    int a[rows][columns];
    printf("enter the numbers:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("printing the matrix:");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%d ",a[i][j]);
    }
    printf("\n");
}
    printf("the largest number:");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            largest=a[0][0];
            if(a[i][j]>largest);
            largest=a[i][j];
        }
        printf("\n");
    }
    printf("largest=%d\n",largest);
}
    */

//finding the smallest
/*#include <stdio.h>
int main(){
    int rows,columns,i,j,smallest;
    printf("enter the no.of rows:");
    scanf("%d",&rows);
    printf("enter the no.og columns:");
    scanf("%d",&columns);
    int a[rows][columns];
    printf("enter the numbers:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("printing the matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%d ",a[i][j]);
    }
    printf("\n");
}
    printf("the smallest number:");
    smallest=a[0][0];
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            
            if(a[i][j]<smallest){
            smallest=a[i][j];
        }
        printf("\n");
    }
}
    printf("smallest=%d\n",smallest);
}
    */

// counting the even or odd elements
/*#include <stdio.h>
int main(){
    int rows,columns,i,j,even,odd;
    printf("enter the no.of rows:");
    scanf("%d", &rows);
    printf("enter the no.of columns:");
    scanf("%d",&columns);
    int a[rows][columns];
    printf("enter the elements:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("print matrx:")
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%d " ,a[i][j]); 
        }  
        printf("\n");  
        }
        printf("finding the even or odd");
        for(i=0;i<rows;i++){
            for(j=0;j<columns;j++){
                if(a[i][j]%2==0){
                    even=even+1;
                }
                else{  
                    odd=odd+1;
                }
            }
            printf("\n");
        }
        printf("odd=%d\n",odd);
        printf("even=%d\n",even);
    }
        */

//sum of each row
/*#include <stdio.h>
int main(){
    int i,j,rows,columns,sum;
    printf("enter the no.of rows:");
    scanf("%d",&rows);
    printf("enter the no.of columns:");
    scanf("%d",&columns);
    int a[i][j];
    printf("enter the elements:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("printing the matrix:");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("sum of each row:");
    for(i=0;i<rows;i++){
        sum=0;
        for(j=0;j<columns;j++){
            sum=sum+a[i][j];
        }
        printf("sum of %d = %d\n",i+1,sum);
}
}*/
/*#include<stdio.h>
int main(){
    int i=3,j=3,sum,a[i][j];
    for(i=0;i<3;i++){
        sum=0;
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            //sum=sum+a[i][j];
        }
        //printf("sum of %d row is %d",i+1,sum);
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        sum=0;
        for(j=0;j<3;j++){
            sum=sum+a[i][j];
        }
        printf("sum of %d row is %d\n",i+1,sum);
    }
    
}   */


// sum of column
/*#include<stdio.h>
int main(){
    int i,j,sum,x,y;
    printf("enter rows:");
    scanf("%d",&x);
    printf("no.of columns:");
    scanf("%d",&y);
    int a[x][y];
    printf("enter the elements:\n");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(j=0;j<y;j++){
        sum=0;
        for(i=0;i<x;i++){
            sum=sum+a[i][j];
        }
        printf("sum of %d column is %d\n",j+1,sum);
    }
}*/

// sum of diagonal
/*#include <stdio.h>
int main(){
int i,j,r,c,sum;
printf("no.of rows:");
scanf("%d",&r);
printf("no.of columns:");
scanf("%d",&c);
int a[r][c];
printf("enter the elemetns:");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
       printf("%d ",a[i][j]);
    }
    printf("\n");
}
sum=0;
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(i==j){
            sum=sum+a[i][j];
        }
    }   
}
printf("sum of diagonal:%d",sum);

}*/

/*include <stdio.h>
int main(){
    int i,j,r,c;
    printf("no.of rows:");
    scanf("%d",&r);
    printf("no.of columns:");
    scanf("%d",&c);
    int a[r][c];
    printf("enter the elements:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(j=0;j<c;j++){
        for(i=0;i<r;i++){
            printf("%d",a[i][j]);
    }
    printf("\n");
}
}*/



//addition of two two matrices
/*#include <stdio.h>
int main(){
int i,j,r,c;
printf("no.of rows:");
scanf("%d",&r);
printf("no.of columns:");
scanf("%d",&c);
int a[r][c];
int b[r][c];
int sum[r][c];
printf("enter the elements:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("printing the matrix:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
printf("enter the elements:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&b[i][j]);
    }
}
printf("print the matrix\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d ",b[i][j]);
    }
    printf("\n");
}
printf("sum of two matrix:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        sum[i][j]=a[i][j]+b[i][j];
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d ",sum[i][j]);
    }
    printf("\n");
}

}*/


//subtraction of two matrices
/*#include <stdio.h>
int main(){
int i,j,r,c;
printf("no.of rows:");
scanf("%d",&r);
printf("no.of columns:");
scanf("%d",&c);
int a[r][c];
int b[r][c];
int sub[r][c];
printf("enter the elements:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("printing the matrix:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
printf("enter the elements:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&b[i][j]);
    }
}
printf("print the matrix\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d ",b[i][j]);
    }
    printf("\n");
}
printf("subtraction  of two matrix:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        sub[i][j]=a[i][j]-b[i][j];
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d ",sub[i][j]);
    }
    printf("\n");
}

}*/


  //multiplication of two matrices
#/*include <stdio.h>
int main(){
int i,j,r,c;
printf("no.of rows:");
scanf("%d",&r);
printf("no.of columns:");
scanf("%d",&c);
int a[r][c];
int b[r][c];
int mul[r][c];
printf("enter the elements:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("printing the matrix:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
printf("enter the elements:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&b[i][j]);
    }
}
printf("print the matrix\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d ",b[i][j]);
    }
    printf("\n");
}
printf("multiplication of two matrix:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        mul[i][j]=a[i][j]*b[i][j];
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d ",mul[i][j]);
    }
    printf("\n");
}

}
    */
   
/*#include <stdio.h>
int main(){
    int r,c,i,j;
    int symmetric = 1;
    printf("no.of rows");
    scanf("%d",&r);
    printf("enter the columns:");
    scanf("%d",&c);
     int a[r][c];
    printf("enter the matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("printing the matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    if(r!=c){
        symmetric=0;
    }
    else{
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(a[i][j]!=a[j][i]){
            symmetric=0;
            break;
        }
    }
    if(symmetric==1) break;
}
    }
    if(symmetric==1){
        printf("it is a symmetric matrix:");
    }
    else{
        printf("it is a unsymmetric matrix");
    }
   

}*/


//identity matrix;
/*#include <stdio.h>
int main(){
    int r,c,i,j,identity=1;
    int symmetric = 1;
    printf("no.of rows");
    scanf("%d",&r);
    printf("enter the columns:");
    scanf("%d",&c);
     int a[r][c];
    printf("enter the matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("printing the matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(i==j){
            if(a[i][j]!=1)
                identity=0;
        }
        else{

               if(a[i][j]!=0)
                    identity=0;
        }
        }
    }

    
    if(identity==1){
        printf("it is a identity  matrix:");
    }
    else{
        printf("it is  not  a identity  matrix");
    }
}*/

// finding the upper triangle and lower triangle
/*#include <stdio.h>
int main(){
    int i,j,c,r;
    printf("no.of rows:");
    scanf("%d",&r);
    printf("no.of columns:");
    scanf("%d",&c);
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("uppeer triangle:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(j>=i)
                printf("%d ",a[i][j]);
        else 
            printf("0 ");
        }
        printf("\n");
    
}
printf("lower triangle:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i>=j)
                printf("%d ",a[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}*/





   

        
    
   



 

 
