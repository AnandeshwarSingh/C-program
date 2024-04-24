#include<stdio.h>

void table();

int main(){
    table();
    table();
    table();
}

void table(){
    int no,i,no2;
    printf("Enter a number\n");
    scanf("%d",&no);
    for(i=1;i<=10;i++){
        no2 = no*i;
        printf("%d\n",no2);
    }
}