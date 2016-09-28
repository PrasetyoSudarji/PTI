#include <stdio.h>

int main(){
	/* kalau Do While biasanya di pakai kalau kita
		sudah mengetahui kondisi berhenti di eksekusi*/
	/* Bedanya Do While dengan While Do adalah 
		pada Do While Program akan di jalan kan terlebih dahulu baru kemudian di check kondisinya memenuhi atau tidak,
		pada While Do program akan di check kondisinya terlebih dahulu baru jika memenuhi maka program akan di jalankan*/
	
	/***Kamus***/
	int i;
	
	/***Algoritma***/
	i=0;					//initialisasi nilai awal i
	do{			 			//Program akan di eksekusi terlebih dahulu
		printf("%d\n",i);
		i++;				//incremental (i akan di tambah 1)
	}while(i<=10);			//Baru Kondisi berhentinya akan di check, jika sudah tidak memenuhi persyaratan,maka program akan berhenti di eksekusi
	
}