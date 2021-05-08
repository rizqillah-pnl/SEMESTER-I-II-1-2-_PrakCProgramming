#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1A\n\n");
	int a=1,bil=2,pembagi,n,prima;
	printf("Masukan Banyaknya Bilangan : ");
	scanf("%d",&n);
	while(a<=n){
		prima=1;
		for(pembagi=2;pembagi<bil;pembagi++){
			if(bil%pembagi==0){
				prima=0;
				break;
			}
		}
		if (prima){
			printf("%d ",bil);
			a++;
		}
		bil++;
	}
}
