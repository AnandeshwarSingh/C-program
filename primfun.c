#include<stdio.h>
void prim(int);
void armstrong(int);
void perfect(int);
int main(){
    int no;
    printf("Enter a number\n");
    scanf("%d",&no);
    prim(no);
    armstrong(no);
    perfect(no);
}
void prim(int x){
    int flag = 0, i ;
    if(x == 0 || x == 1){
        flag = 1;
    }
    for(i = 2; i < x; i++){
        if(x % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("%d is a prime number\n",x);
    }
    else{
        printf("%d is not a prime number\n",x);
    }
}

void armstrong(int x){
    int ans = 0, rem, x1;
    x1=x;
    while(x>0){
        rem = x%10;
        ans = ans + (rem*rem*rem*rem);
        x = x/10;
    }
    if(ans == x1){
        printf("%d no is armstrong \n",x1);
    }
    else{
        printf("%d no is not armstrong \n",x1);
    }  
}
void perfect(int x){
    int i,rem,sum=0;
    for(i=1;i<x;i++){
        rem = x%i;
        if(rem == 0){
            sum = sum + i;
        }
    }
    if(sum == x){
        printf("%d is a perfect number\n",x);
    }
    else{
        printf("%d is not a perfect number\n",x);
    }
}