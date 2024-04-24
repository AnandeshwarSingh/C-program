#include<stdio.h>
int a,b,no;
int calu(int x, int y){   
    a = x+y;
    no = x+y-10;
    return 10;
}

int main(){
    int ans=0;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Entor another number");
    scanf("%d",&b);
    ans = calu(a,b);
    printf("Sum = %d", ans);
    
}