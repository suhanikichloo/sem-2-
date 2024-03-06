#include<stdio.h>
int main(){
    char str[100];
    int length = 0;

    printf("Enter the Word : ");
    gets(str);

    for(int i=0; str[i]!='\0' ;i++){
        // if(str[i]=='\0'){
        //     break;
        // }
        // else{
            length++;
        // }
    }
    printf("Length of the word : %d",length);
}
