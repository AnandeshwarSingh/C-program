# include <stdio.h>
int main( )
{
    int sc, math, sst, c, cpp, result;
    printf("Enter the 5 Subject marks\n");
    scanf("%d%d%d%d%d",&sc,&math,&sst,&c,&cpp);
    result = (sc+math+sst+c+c++)*100/500;
    if(result>=60)
    {
        printf("First division\n");
    }
    else if((result<=59)&&(result>50)){
        printf("Second division\n");
    }
    else if((result<=50)&&(result>40)){
        printf("third division\n");
    }
    else{
        printf("Fail\n");
    }
}
