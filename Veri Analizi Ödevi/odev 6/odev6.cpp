#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
	srand(time(NULL));
	int boyut = 500;
	float sayilar[boyut];
	for(int i =0;i<boyut;i++){
		float randomsayi = ((float)rand()) / (float)RAND_MAX * (1 - 0+1)+0;
		sayilar[i] = randomsayi;
		cout << i+1 << ". Sayi : " << randomsayi << endl;
	}	return 0;}
