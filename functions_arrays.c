#include <stdio.h>
//read and print array
void printarray(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
/*void sumarray(int *arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    printf("%d\n",sum);

}*/
// sum array
int sumarray(int *arr ,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
//find the largest in array
int largest(int *arr,int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
// find the smallest in array
int smallest(int *arr,int size){
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
// find the second the largest
int secondlargest(int *arr,int size){
   int max=arr[0];
   int max2=arr[0];
   for(int i=1;i<size;i++){
    if(arr[i]>max){
        max2=max;
        max=arr[i];
    }
    else{
        if(arr[i]!=max && arr[i]>max2){
            max2=arr[i];
        }
    }
   }
   return max2;
}
// find the second the smallest in array
int secondsmallest(int *arr,int size){
   int min=arr[0];
   int min2=arr[0];
   for(int i=1;i<size;i++){
    if(arr[i]<min){
        min2=min;
        min=arr[i];
    }
    else{
        if(arr[i]!=min && arr[i]<min2){
            min2=arr[i];
        }
    }
   }
   return min2;
}
// double the array
void doublearray(int *arr,int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]*2;
    }
     
}
// reverse the array
void reversearray(int *arr,int size){
    int left ,temp,right;
    left=0;
    right=size-1;
    while(left<right){
         temp=arr[left];
         arr[left]=arr[right];
         arr[right]=temp;
         left++;
         right--;
    }
    
}
//sorting array
void sortingarray(int *arr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int numbers[]={1,2,3,4,5};
    int numbers2[]={10,25,15,40,30};
    int numbers3[]={20,5,35,12,8};
    printarray(numbers,5);

   // sumarray(numbers,5);
    int result = sumarray(numbers,5);
    printf("%d\n",result);
   int  result2 =largest(numbers,5);
   printf("%d\n",result2);
   int result3=smallest(numbers,5);
   printf("%d\n",result3);
   int result4=secondlargest(numbers2,5);
   printf("%d\n",result4);
   int result5=secondsmallest(numbers3,5);
   printf("%d\n",result5);
   //taking the input from the user
   int arr[500];
   int n;
   printf("enter the no.of elements:");
   scanf("%d",&n);
   printf("enter the elements:");
   for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
   }
   for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
   }
   printf("\n");
   doublearray(arr,n);
   for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
   }
   printf("\n");
   // the end
   reversearray(numbers,5);
   for(int i=0;i<5;i++){
        printf("%d " ,numbers[i]);
   }
   printf("\n");
   sortingarray(numbers3,5);
   for(int i=0;i<5;i++){
    printf("%d ",numbers3[i]);
   }
   printf("\n");
}




