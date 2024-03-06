// Program to create simple calculator using switch case and function for every operation
#include<stdio.h>
int add(int x ,int y){
    return x+y;
}
int sub(int x,int y){
    return x-y;
}
int mul(int x,int y){
    return x*y;
}
int div(int x,int y){
    return x/y;
}

int main(){
    int x;
    printf("Enter x : ");
    scanf("%d",&x);
    int y;
    printf("Enter y : ");
    scanf("%d",&y);
    int choice;
    printf("enter the operation : ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Sum = %d\n",add(x,y));
        break;
        case 2:
        printf("Sub = %d\n",sub(x,y));
        break;
        case 3:
        printf("mul = %d\n",mul(x,y));
        break;
        case 4:
        printf("Div = %d\n",div(x,y));
        break;
        default:{
            printf("Invalid choice\n");
        }
        

    }
}
