#include <iostream>
using namespace std;

void symbolPrint(char zenklas, int kiekis);
void symbolPrintV2();
int suma(int, int);
bool arLyginis(int num);
void kintamojoPerdavimasReiksme(int);
// void kintamojoPerdavimasAdresu(int&);
void kintamojoPerdavimasAdresu(int& skaicius) {
    cout<<"Perdavimas reiksme PRIES: "<<skaicius<<endl;
    skaicius = 5;
    cout<<"Perdavimas reiksme PO: "<<skaicius<<endl;
}

int main() {
    // char zenklas;
    // int zenkluKiekis;
    // cout <<"Iveskite skiriamaji zenkla"<<endl;
    // cin >> zenklas;
    // cout << endl;
    // cout << "Iveskite zenklu kieki"<<endl;
    // cin >> zenkluKiekis;
    // symbolPrint(zenklas, zenkluKiekis);
    // cout<<"Duomenu tipas       Ilgis       Diapazonas \n";
    // symbolPrintV2();
    // cout<<"char                 1B        -128 - 127"<<endl;
    // cout<<"short                2B        -32768 - 32767"<<endl;
    // cout<<"int                  4B        ~-2e9 - ~2e9"<<endl;
    // symbolPrint(zenklas, zenkluKiekis);

    // cout<<"Suma dvieju skaiciu "<<suma(8 , 9)<<endl;
    // string arLygTekst = arLyginis(10) ? "lyginis" : "nelyginis";
    // cout<<"Ivestas skaicius yra "<<arLygTekst;

    int skaicius = 12;

    cout <<"PRIES funkcijos kvietima reiksme yra lygi "<<skaicius<<endl;
    // kintamojoPerdavimasReiksme(skaicius);
    kintamojoPerdavimasAdresu(skaicius);
    cout <<"PO funkcijos kvietima reiksme yra lygi "<<skaicius<<endl;

    return 0;
}

void kintamojoPerdavimasReiksme(int skaicius) {
    cout<<"Perdavimas reiksme PRIES: "<<skaicius<<endl;
    skaicius = 5;
    cout<<"Perdavimas reiksme PO: "<<skaicius<<endl;
}


void symbolPrint(char zenklas, int kiekis) {
    for (int i = 0; i < kiekis; i++) {
        cout << zenklas;
    }
    cout << endl;
}
void symbolPrintV2() {
    for (int i = 0; i < 60; i++) {
        cout << "*";
    }
    cout << endl;
}

int suma(int num1, int num2) {
    return num1 + num2;
}

bool arLyginis(int num) {
    return num % 2 == 0;
}
