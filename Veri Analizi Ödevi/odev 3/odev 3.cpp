#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
	srand(time(NULL));
	int boyut = 500;
	int sayilar[boyut];
	int toplam = 0;
	int ortalama = 0;
	for(int i =0;i<boyut;i++){
		int randomsayi = rand()%(35-10+1)+10;
		sayilar[i] = randomsayi;
		toplam+= randomsayi;
	}
	ortalama += toplam/boyut;
	if(ortalama >=20 && ortalama <=30){
		cout << "20 Ile 30 arasindaki sayilarin ortalamasi : " << ortalama << endl;
	}
	
	
	
	
	
	
	
	
	return 0;
}
