#include <iostream>
#include <fstream>

using namespace std;

int main() {

    int masyvasSkaiciu[15];

    ifstream duomenuFailas;
    duomenuFailas.open("duomenys.txt");

    if(duomenuFailas.fail()) {
        cout <<"Nepavyko atidaryti failo duomenys.txt "<<endl;
        return 1;
    }
    if(duomenuFailas.is_open()) {
        cout <<"Failas atidarytas"<<endl;
    }

    for (int i = 0; i < 8; i++) {
        duomenuFailas >> masyvasSkaiciu[i];
    }
    cout<<"Duomenys nuskaityti"<<endl;
    duomenuFailas.close();
    if(!duomenuFailas.is_open()) {
        cout <<"Failas uzdarytas"<<endl;
    }


    for (int i = 0;  i < 8; i++) {
        cout<<masyvasSkaiciu[i]<<" ";
    }






    return 0;
}
