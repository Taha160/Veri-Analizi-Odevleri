#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
	srand(time(NULL));
	int boyut = 500;
	int sayilar[boyut];
	for(int i =0;i<500;i++){
		int randomsayi = rand()%(100-0+1)+0;
		cout << i+1 << ". Sayi : " << randomsayi << endl;
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
