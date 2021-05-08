#include<stdio.h>
#include<stdlib.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1A\n\n");
	again:
	int a=1,bil=2,pembagi,n,prima;
	char pilih;
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
	printf("\nApakah Anda Ingin Keluar (y/t) ?");
	pilih=getchar();
	scanf("%c",&pilih);
	if(pilih=='t')
		goto again;
	else if(pilih=='Y'||pilih=='T'){
		printf("\n\t-->> ERROR <<--");
		exit(0);
	}
	else if(pilih=='y')
	exit(0);
	printf("\n");
}
