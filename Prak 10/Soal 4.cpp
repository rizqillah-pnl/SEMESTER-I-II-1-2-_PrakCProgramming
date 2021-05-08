#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n\n");
	int a,n;
	float nilai,jum=0,max=0,min=0;
	printf("\t\t>> List Nilai Mahasiswa <<\n\n");
	printf("Masukan Jumlah Nilai Yang Ingin Dimasukan : ");
	scanf("\n%d",&n);
	for(a=1;a<=n;a++){
		printf("Nilai ke-%d : ",a);
		scanf("%f",&nilai);
		jum=jum+nilai;
		if(a==1){
			max=nilai;
			min=nilai;
		}
		else{
			if(max<nilai)
			max=nilai;
			if(min>nilai)
			min=nilai;
		}
	}
	printf("\nNilai Minimum = %g\n",min);
	printf("Nilai Maksimum = %g\n",max);
	printf("Nilai Rata-rata = %g\n",jum/n);
}
