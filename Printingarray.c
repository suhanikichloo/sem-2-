#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter the size of an Array : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Printed Array : \n");

    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
        sum=sum+arr[i];
         
    }
    printf("Sum = %d\n",sum);
}
