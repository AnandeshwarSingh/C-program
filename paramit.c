#include<stdio.h>

int cal(int , int , int );
int main(){
    int a,b,c,result;
    printf("Enter three number\n");
    scanf("%d%d%d",&a,&b,&c);
    result = cal(a,b,c);
    printf("%d\n",result);
}
int cal(int x,int y, int z){
    int d;
    d = z+y+x;
    return d;
    

}