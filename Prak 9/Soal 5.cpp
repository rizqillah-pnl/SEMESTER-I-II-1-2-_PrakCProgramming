#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	int jumlahspasi=0,jumlahkapital=0,jumlahkecil=0,jumlahangka=0;
	char kar;
	printf("Masukan Kalimat Sembarang : ");
	do{
		scanf("%c",&kar);
		if(kar==' ')
			jumlahspasi++;
		else if(kar <= 90 && kar >= 65)
			jumlahkapital++;
		else if(kar <= 122 && kar >= 97)
			jumlahkecil++;
		else if(kar <= 57 && kar >= 48)
			jumlahangka++;
	}
	while(kar!='\n');
		printf("\nJumlah Semua Karakter   = %d",jumlahspasi+jumlahkapital+jumlahkecil+jumlahangka);
		printf("\nJumlah Spasi	        = %d",jumlahspasi);
		printf("\nJumlah Karakter Kapital = %d",jumlahkapital);
		printf("\nJumlah Karakter Kecil   = %d",jumlahkecil);
		printf("\nJumlah Karakter Angka   = %d",jumlahangka);
}
