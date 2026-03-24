#include <iostream>
#include <fstream>

using namespace std;

int main() {

    int masyvasSkaiciu[15];
    int kiekis = 0;
    int suma = 0;
    int vidurkis = 0;

    ifstream duomenuFailas;
    duomenuFailas.open("duomenys.txt");

    if(duomenuFailas.fail()) {
        cout <<"Nepavyko atidaryti failo duomenys.txt "<<endl;
        return 1;
    }
    if(duomenuFailas.is_open()) {
        cout <<"Failas atidarytas"<<endl;
    }

    // for (int i = 0; i < 8; i++) {
    //     duomenuFailas >> masyvasSkaiciu[i];
    // }
    while(!duomenuFailas.eof()) {
        duomenuFailas >> masyvasSkaiciu[kiekis];
        kiekis++;
    }
    cout<<"Duomenys nuskaityti"<<endl;
    duomenuFailas.close();
    if(!duomenuFailas.is_open()) {
        cout <<"Failas uzdarytas"<<endl;
    }

    for (int i = 0; i < kiekis; i++) {
        cout<<masyvasSkaiciu[i]<<" ";
        suma += masyvasSkaiciu[i];
    }

    vidurkis = double(suma)/kiekis;
    cout <<endl;
    cout << "Suma: "<<suma<<endl;
    cout << "Vidurkis: "<<vidurkis<<endl;

    ofstream rezultatai;

    rezultatai.open("rezultatai.txt");

    if(rezultatai.fail()) {
        cout <<"Nepavyko atidaryti rezultatu failo"<<endl;
        return 1;
    }

    rezultatai<<"Duomenys faile"<<endl;
    rezultatai<<"Suma: "<<suma<<endl;
    rezultatai<<"Vidurkis: "<<vidurkis<<endl;

    rezultatai.close();

    return 0;
}
