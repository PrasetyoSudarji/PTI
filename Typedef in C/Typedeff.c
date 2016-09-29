#include <stdio.h>
#include "boolean.h"


typedef int Halaman;
typedef struct{
	int nomorKomik;
	boolean statusPublikasi;
	Halaman totalHalaman;
	boolean berwarna;
}DataKomik;

int main(){
	DataKomik komik1,komik2,komik3;
	komik1.nomorKomik = 2;
	komik1.statusPublikasi = false;
	komik1.totalHalaman = 100;
	komik1.berwarna = true;
	
	komik2.nomorKomik = 42;
	komik2.statusPublikasi = true;
	komik2.totalHalaman = 50;
	komik2.berwarna = true;
	
	komik3.nomorKomik = 44;
	komik3.statusPublikasi = false;
	komik3.totalHalaman = 10;
	komik3.berwarna = false;
	
	printf("Komik nomor \t:%d\n",komik1.nomorKomik);
	printf("Jumlah Halaman \t:%d\n",komik1.totalHalaman);
	printf("Terpublikasi \t:%d\n",komik1.statusPublikasi);
	printf("Berwarna \t:%d\n\n",komik1.berwarna);
	
	if (komik1.berwarna == true){
		printf("Komik ini akan tenar\n\n");
	}else{
		printf("Komik ini perlu perbaikan\n\n");
	}
	
	printf("Komik nomor \t:%d\n",komik2.nomorKomik);
	printf("Jumlah Halaman \t:%d\n",komik2.totalHalaman);
	printf("Terpublikasi \t:%d\n",komik2.statusPublikasi);
	printf("Berwarna \t:%d\n\n",komik2.berwarna);
	
	if (komik2.berwarna == true){
		printf("Komik ini akan tenar\n\n");
	}else{
		printf("Komik ini perlu perbaikan\n\n");
	}
	printf("Komik nomor \t:%d\n",komik3.nomorKomik);
	printf("Jumlah Halaman \t:%d\n",komik3.totalHalaman);
	printf("Terpublikasi \t:%d\n",komik3.statusPublikasi);
	printf("Berwarna \t:%d\n\n",komik3.berwarna);
	
	if (komik3.berwarna == true){
		printf("Komik ini akan tenar\n\n");
	}else{
		printf("Komik ini perlu perbaikan\n\n");
	}
	
	
}