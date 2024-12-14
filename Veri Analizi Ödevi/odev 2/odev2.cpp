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
		int randomsayi = rand()%(35-25+1)+25;
		cout << i+1 << ". Sayi : " << randomsayi << endl;
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
