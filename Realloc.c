#include<stdio.h> #include<stdlib.h> int main() { 	int *ptr, i, *p, n, m; 	scanf("%d", &n); 	ptr=(int *)malloc(n*sizeof(int)); 	if(ptr==NULL) { 		printf("Memory  is full..\n"); 	} 	printf("Enter the %d elements : \n", n); 	for(i=0; i<n; i++) {         scanf("%d", ptr+i);     }     printf("Enter M value to resize the allocated space : \n");     scanf("%d", &m);     ptr=(int*)realloc(ptr, m*sizeof(int));     if(ptr==NULL) {         printf("MemAfte
