#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct komanda {
    string pavadinimas;
    string miestas;
    bool zaidziaEurolygoje;
};

struct zaidejas {
    string vardas;
    string pavarde;
    string pozicija;
    double ugis;
    int zaistuVarzybuKiekis;
    int pelnytiTaskai;
    double vidPelnomiTaskai;
};

int main() {

    komanda komandos[10];
    komanda temp;
    zaidejas zaidejai[10];
    ifstream inFile;
    int kiekis, zaidejuKiekis;

    inFile.open("zaidejuStatistika.txt");
    if(!inFile) {
        cout <<"Nepavyko atidaryti failo"<<endl;
        return 1;
    }

    inFile >> zaidejuKiekis;
    for(int i = 0; i < zaidejuKiekis; i++) {
        inFile >> zaidejai[i].vardas
                >> zaidejai[i].pavarde
                >> zaidejai[i].pozicija
                >> zaidejai[i].ugis
                >> zaidejai[i].zaistuVarzybuKiekis
                >> zaidejai[i].pelnytiTaskai;
        zaidejai[i].vidPelnomiTaskai = (double)zaidejai[i].pelnytiTaskai/zaidejai[i].zaistuVarzybuKiekis;
    }

    for(int i = 0; i < zaidejuKiekis; i++) {
        cout<<zaidejai[i].pavarde<<" "<<fixed<<setprecision(1)<<zaidejai[i].vidPelnomiTaskai<<endl;
    }


    // cout <<"Kiek komandu norite ivesti? Ne daugiau kaip 10"<<endl;
    // cin>>kiekis;
    //
    // for(int i = 0; i < kiekis; i++) {
    //     cout<<"Koks komandos pavadinimas? "<<endl;
    //     cin>>komandos[i].pavadinimas;
    //     cout<<endl;
    //     cout<<"Kokiame mieste isukurus komanda? "<<endl;
    //     cin>>komandos[i].miestas;
    //     cout<<endl;
    //     cout<<"Ar zaidzia Eurolygoje? Jei zaizdia pasirinkite - 1, o jei ne - 0 "<<endl;
    //     cin>>komandos[i].zaidziaEurolygoje;
    //     cout<<endl;
    // }
    //
    // for(int i = 0; i < kiekis; i++) {
    //     for(int j = i+1; j < kiekis; j++) {
    //         if(komandos[i].miestas > komandos[j].miestas) {
    //             temp = komandos[i];
    //             komandos[i] = komandos[j];
    //             komandos[j] = temp;
    //         }
    //     }
    // }
    //
    // for(int i = 0; i < kiekis; i++) {
    //     string arzaidzia = komandos[i].zaidziaEurolygoje ? "zaidzia" : "nezaidzia";
    //     cout<<"Komanda "<<komandos[i].pavadinimas<<" yra is miesto "
    //     <<komandos[i].miestas<<" ji "<<arzaidzia<<" Eurolygoje"<<endl;
    //
    // }

    return 0;
}
