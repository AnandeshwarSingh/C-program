#include<stdio.h>
void sum();
int a,b,c;
int main(){
    int d;
    sum();
    printf("Sum = %d",d);
}
void sum(){
    printf("Enter 1st number");
    scanf("%d",&a);
    printf("Enter 2nd number");
    scanf("%d",&b);
    c= a+b;
    printf("Sum = %d\n",c);
}