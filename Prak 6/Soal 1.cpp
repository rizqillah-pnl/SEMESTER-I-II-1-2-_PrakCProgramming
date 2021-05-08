#include<stdio.h>
#include<math.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	float a,b,c,D,x1,x2;
	printf("Masukan Nilai A : "); scanf("%f",&a);
	printf("Masukan Nilai B : "); scanf("%f",&b);
	printf("Masukan Nilai C : "); scanf("%f",&c);
	
	D=pow(b,2)-4*a*c;
	
	if (D==0)
		x1=x2=-b/2*a;
	else if (D>0){
		x1=(-b+sqrt(D))/2*a;
		x2=(-b-sqrt(D))/2*a;
	}
	else{
		x1=-b/2*a+(sqrt(-D)/2*a);
		x2=-b/2*a-(sqrt(-D)/2*a);
	}
	printf("\nNilai Diskriminan : %g\n",D);
	printf("\nNilai Akar x1 : %g\n",x1);
	printf("\nNilai Akar x2 : %g\n",x2);
}
