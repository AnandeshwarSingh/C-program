# include <stdio.h>
int main( )
{
    int sal=0,exp,quli;
    char g;
    printf("Enter exp qlification and gender\n");
    scanf("%c%d%d",&g,&exp,&quli);
    if((g=='M')&&(exp>=10)&&(quli==1)){
        sal = 15000;
    }
    else if((g=='M')&&(exp>=10)&&(quli==0)){
        sal = 10000;
    }
    else if((g=='M')&&(exp<10)&&(quli==1)){
        sal = 10000;
    }
    else if((g=='M')&&(exp<10)&&(quli==0)){
        sal = 7000;
    }
    else if((g=='F')&&(exp>=10)&&(quli==1)){
        sal = 12000;
    }
    else if((g=='F')&&(exp>=10)&&(quli==0)){
        sal = 9000;
    }
    else if((g=='F')&&(exp<10)&&(quli==0)){
        sal = 6000;
    }
    printf("Salary of Employe is : %d ",sal);
}