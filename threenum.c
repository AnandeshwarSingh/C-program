#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter three number\n");
    
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        printf("Number 1 which is %d, is grater\n",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("Number 2 which is  %d, is grater\n",num2);
    }
    else if(num3>num1 && num3>num2){
        printf("Number 3 which is %d, is grater\n",num3);
    }
    else{
        printf("All are equal\n",num3);
    }
}