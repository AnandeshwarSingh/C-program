#include<stdio.h>
int main(){
    int p,t,count;
    float r,si;
    for(count = 0; count<2; count = count + 1){//count++
        printf("Enter Principal Amount, time, Rate\n");
        scanf("%d%d%f",&p,&t,&r);
        si = (p*r*t)/100;
        printf("%f\n",si);
    }
}

