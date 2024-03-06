#include<stdio.h>
int ADD(int x,int y){
    return x+y;
}


int main(){
    int x;
    printf("Enter x : ");
    scanf("%d",&x);
    int y;
    printf("Enter y : ");
    scanf("%d",&y);
    printf("Sum --> x + y = %d\n",ADD(x,y));
    

}
