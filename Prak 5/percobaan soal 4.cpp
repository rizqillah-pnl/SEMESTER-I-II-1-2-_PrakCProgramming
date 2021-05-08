#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	int  x;
	printf("masukan bilangan : ");
	scanf("%d",&x);
	if (x>7){
		if(x%2==0||x%3==0||x%5==0||x%7==0){
		printf("\nBukan bilangan Prima",x);
	}
	else
		printf("\nBilangan Prima 1",x);
	}
	if(x==2||x==3||x==5||x==7)
		printf("\nBilangan Prima 2",x);
}
