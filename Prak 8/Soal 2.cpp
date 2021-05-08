#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	int a,b,c=0;
	printf("Masukan Bilangan Triangular = ");
	scanf("%d",&a);
	printf("\n%d",a);
	c=c+a;
	for (b=a-1;b>=1;b--){
		printf("+%d",b);
		c=c+b;
	}
	printf("\nHasilnya adalah %d\n",c);
}
