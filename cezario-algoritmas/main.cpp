#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char abecele[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

string sifravimas(string tekstas, int poslinkis, string tipas);

int main() {
    string tekstas; //tekstas, kuri noresiu uzsifruoti
    string tipas; //tipas: sifravimas arba desifravimas
    int poslinkis; //per kiek poziciju keisis raide
    int pasirinkimas, c; //menu pasirinkimas
    char ch = 'A';

    while(true) {
        cout <<"Pasirinkite funkcija \n";
        cout <<"Norite uzsifruoti teksta - 1\n";
        cout <<"Norite desifruoti teksta - 2\n";
        cout <<"Norite iseiti is programos spauskite - 0 \n";

        cin >> pasirinkimas;

        if (pasirinkimas == 1 || pasirinkimas == 2) {
            tipas = (pasirinkimas == 1) ? "sifravimas" : "desifravimas";
        }
        if (pasirinkimas == 0) {
            break;
        }

        switch (pasirinkimas) {
            case 1:
                cout << "Uzsifruoti \n";
                cout << "Iveskite norima uzsifruoti teksta: "<<endl;
                cin.ignore(10000, '\n');
                getline(cin, tekstas);
                cout << "Iveskite poslinki: "<<endl;
                cin >> poslinkis;

                for(int i = 0; i < tekstas.length(); i++) {
                    tekstas[i] = toupper(tekstas[i]);
                }
                cout << "Uzsifruotas tekstas: " <<sifravimas(tekstas, poslinkis, tipas)<<endl;
                break;
            case 2:
                cout<<"Desifruoti \n";
                cout<<"Iveskite norima desifruoti teksta: "<<endl;
                cin.ignore(10000, '\n');
                getline(cin, tekstas);
                cout << "Iveskite poslinki: "<<endl;
                cin >> poslinkis;
                for(int i = 0; i < tekstas.length(); i++) {
                    tekstas[i] = toupper(tekstas[i]);
                }
                cout << "Desifruotas tekstas: " <<sifravimas(tekstas, poslinkis, tipas)<<endl;
                break;
            default:
                cout << "Neteisinga ivestis \n";
        }

    }

    return 0;
}

string sifravimas(string tekstas, int poslinkis, string tipas) {
    int tekstoIndeksai[100];
    int pakeistiTekstoIndeksai[100];
    string rezultatas;
    bool isFind;
    for (int i = 0; i < tekstas.length(); i++) {
        isFind = false;
        for (int j = 0; j < sizeof(abecele); j++) {
            if (abecele[j] == tekstas[i]) {
                tekstoIndeksai[i] = j;
                isFind = true;
            }
        }
        pakeistiTekstoIndeksai[i] = (tipas == "sifravimas") ?
                                                            (tekstoIndeksai[i] + poslinkis)% sizeof(abecele)
                                                            : (tipas == "desifravimas") ?
                                                                (tekstoIndeksai[i] - poslinkis + sizeof(abecele))% sizeof(abecele) : 0;
        rezultatas += isFind ? abecele[pakeistiTekstoIndeksai[i]] : tekstas[i];
        // rezultatas += tekstas[i];
    }

    return rezultatas;
}
