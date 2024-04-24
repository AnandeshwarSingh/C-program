#include<stdio.h>
void message(); // declaration
int a,b,c;

int main(){
    printf("This is yashasheree\n");
    message();
    printf("This is pranav\n");
    c= a+b;
    printf("%d\n",c);
    
}

void message(){
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
}