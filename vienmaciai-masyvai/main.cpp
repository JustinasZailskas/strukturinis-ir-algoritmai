#include <iostream>
using namespace std;

int main() {
    // int skaiciai[5];
    // skaiciai[3] = 15;
    // skaiciai[0] = 4;
    // skaiciai[1] = 5;
    // skaiciai[2] = skaiciai[0] + skaiciai[1];
    // skaiciai[4] = skaiciai[3] / skaiciai[1];
    // cout<<skaiciai[0]<<endl;
    // cout<<skaiciai[1]<<endl;
    // cout<<skaiciai[2]<<endl;
    // cout<<skaiciai[3]<<endl;
    // cout<<skaiciai[4]<<endl;

    // for(int i = 0; i < 5; i++) {
    //     cout <<"Masyvo "<<i+1<<" elemento reiksme: "<<skaiciai[i]<<endl;
    // }

    int naujasSkaiciuMasyvas[5] = {};

    for(int i = 0; i < 5; i++) {
        cout<<"Iveskite skaiciu: "<<endl;
        cin>>naujasSkaiciuMasyvas[i];
    }
    for(int i = 0; i < 5; i++) {
        cout <<"Masyvo "<<i+1<<" elemento reiksme: "<<naujasSkaiciuMasyvas[i]<<endl;
    }


    return 0;
}
