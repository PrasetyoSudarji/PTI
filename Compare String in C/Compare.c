#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	char Nama[30],JK[10];
	float alas,tinggi,sisiMiring;
	printf("Input Nama\t : ");
	gets(Nama);
	printf("Input JK\t : ");
	gets(JK);
	
	printf("\nMasukkan alas segitiga siku-siku \t: ");
	scanf("%f",&alas);
	printf("Masukkan tinggi segitiga siku-siku \t: ");
	scanf("%f",&tinggi);
	
	if (strcmp(JK,"P")==0){
		printf("\nHallo, Sis %s \n",Nama);	
	}else if (strcmp(JK,"L")==0){
		printf("\nHallo, Bro %s \n",Nama);
	}
	sisiMiring = sqrt((alas*alas)+(tinggi*tinggi));
	printf("Berikut hasil perhitungan sisi miring segitiga siku-siku : \n");
	printf("Alas \t: %.2f\n",alas);
	printf("Tinggi \t: %.2f\n",tinggi);
	printf("Sisi miring \t: %.2f\n",sisiMiring);
	
}