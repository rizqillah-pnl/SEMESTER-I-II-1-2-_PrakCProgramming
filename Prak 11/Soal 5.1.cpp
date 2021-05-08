#include<stdio.h>
#include<stdlib.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1A\n\n");
	again:
	int a,b,n;
	char pilih;
	printf("Masukan Jumlah Data : ");
	scanf("%d",&n);
	for(a=1;a<=n;a++){
		for(b=1;b<=n;b++){
			printf("%d ",b);
		}
	printf("\n");
	}
	printf("\nApakah anda ingin keluar (y/t) ?");
	pilih=getchar();
	scanf("%c",&pilih);
	if(pilih=='t')
		goto again;
	else if(pilih=='Y'||pilih=='T'){
		printf("\n\t-->> ERROR <<--");
		exit(0);
	}
	else if (pilih=='y')
		exit(0);
	printf("\n");
}
