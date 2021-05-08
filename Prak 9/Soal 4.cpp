#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	int jumlahkar=0,jumlahspasi=0;
	char kar;
	printf("Masukan Kalimat Sembarang : ");
	do{
		scanf("%c",&kar);
		if(kar==' ')
			jumlahspasi++;
		else
			jumlahkar++;
	}
	while(kar!='\n');
		printf("\nJumlah Karakter = %d",jumlahkar);
		printf("\nJumlah Spasi	  = %d",jumlahspasi);
}
