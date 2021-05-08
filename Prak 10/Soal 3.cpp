#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	int a,n;
	printf("Masukan batas bilangan = ");
	scanf("%d",&n);
	printf("\nHasil Pengulangan = ");
	for(a=1;a<n;a+=2){
		if(a>100)
		break;
		if(a%7==0||a%11==0)
		continue;
		printf("%d ",a);
	}
	printf("\n");
}
