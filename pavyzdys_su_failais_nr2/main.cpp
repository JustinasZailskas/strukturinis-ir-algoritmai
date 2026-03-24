#include <iostream>
#include <fstream>

using namespace std;

int main() {

    int sk;
    int teigiami[50];
    int kiek = 0, suma = 0;

    ifstream skaiciuFailas("skaiciai.txt");

    if(skaiciuFailas.fail()) {
        cout<<"Nepavyko atidaryti failo skaiciai.txt "<<endl;
        return 1;
    }

    while(skaiciuFailas >> sk) {
        if (sk > 0) {
            teigiami[kiek] = sk;
            suma += sk;
            kiek++;
        }
    }

    skaiciuFailas.close();

    if(kiek == 0) {
        cout<<"Teigiamu skaiciu nerasta"<<endl;
    }

    ofstream teigiamiSkaiciai("teigiami.txt");
    if(teigiamiSkaiciai.fail()) {
        cout<<"Nepavyko atidaryti failo teigiamiSkaiciai.txt "<<endl;
        return 1;
    }

    for(int i = 0; i < kiek; i++) {
        teigiamiSkaiciai << teigiami[i]<<" ";
    }

    teigiamiSkaiciai<<endl;
    teigiamiSkaiciai<<"Is viso skaitmenu: "<<kiek<<endl;
    teigiamiSkaiciai<<"Suma: "<<suma<<endl;

    teigiamiSkaiciai.close();

    return 0;
}
