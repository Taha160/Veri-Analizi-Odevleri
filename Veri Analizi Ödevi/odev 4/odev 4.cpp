#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(NULL));
    int boyut = 500;
    int sayilar[boyut];
    int toplam = 0;
    int art_ortalama = 0;
    int enbuyuk, enkucuk;
    int teksayilar[boyut];
    int ciftsayilar[boyut];
    int ciftsayilar_sayac = 0, teksayilar_sayac = 0;
    int ortk[boyut];
    int ortb[boyut];
    int ortalamab_sayac = 0, ortalamak_sayac = 0;
    int frekans[36] = {0}; 
 
    for (int i = 0; i < boyut; i++) {
        int randomsayi = rand() % (35 - 10 + 1) + 10;  
        sayilar[i] = randomsayi;
        toplam += randomsayi;

        if (randomsayi % 2 == 0) {
            ciftsayilar[ciftsayilar_sayac++] = randomsayi;
        } else {
            teksayilar[teksayilar_sayac++] = randomsayi;
        }

        frekans[randomsayi - 10]++;  
    }

    art_ortalama = toplam / boyut;
    cout << "Dizideki Sayilarin Aritmatik Ortalamasi: " << art_ortalama << endl;

    enbuyuk = sayilar[0];
    enkucuk = sayilar[0];
    for (int i = 1; i < boyut; i++) {
        if (sayilar[i] > enbuyuk) {
            enbuyuk = sayilar[i];
        }
        if (sayilar[i] < enkucuk) {
            enkucuk = sayilar[i];
        }
    }

    cout << "En buyuk sayi: " << enbuyuk << endl;
    cout << "En kucuk sayi: " << enkucuk << endl;
    
    cout << "Cift Sayilar: " << endl;
    for (int i = 0; i < ciftsayilar_sayac; i++) {
        cout << ciftsayilar[i] << endl;
    }
    cout << "Tek Sayilar: " << endl;
    for (int i = 0; i < teksayilar_sayac; i++) {
        cout << teksayilar[i] << endl;
    }
    cout << "\nSayilardaki frekanslar: " << endl;
    for (int i = 0; i < 36; i++) { 
        if (frekans[i] > 0) { 
            cout << "Sayi " << i + 10 << ": " << frekans[i] << " kez tekrar etti." << endl;
        }
    }
    for (int i = 0; i < boyut; i++) {
        int randomsayi = sayilar[i]; 
        if (randomsayi < art_ortalama) {
            ortb[ortalamab_sayac++] = randomsayi;
        } else {
            ortk[ortalamak_sayac++] = randomsayi;
        }
	}
    cout << "Ortalamanin altindaki sayilar: " << endl;
    for (int i = 0; i < ortalamab_sayac; i++) {
        cout << ortb[i] << endl;}
    cout << "Ortalamanin ustundeki sayilar: " << endl;
    for (int i = 0; i < ortalamak_sayac; i++) {
        cout << ortk[i] << endl;}


    return 0;
}

