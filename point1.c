#include<stdio.h>
int main(){
    int i,b=10;
    int *j=&i;
    printf("Enter a number\n");
    scanf("%d",&i);
    printf("%u\n",&i);
    printf("%d\n",i);
    printf("%u\n",*(&b));
    printf("%d\n",j);
    printf("%d",*j);
}