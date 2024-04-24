#include<stdio.h>
int c,a,b,result;
int  main()
{

	int mult();
	result=mult();
	printf("Multiplication: %d",result);
	
}
int mult() 
{  
    
	printf("Enter the two number:");
	scanf("%d %d",&a,&b);
	c=a*b;
	printf("\n%d\n",c);
    return c;
}