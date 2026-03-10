#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    const int STUDENTAI = 3;
    const int DALYKAI = 3;

    string studentai[STUDENTAI] = {"Jonas", "Mantas", "Ieva"};
    string dalykai[DALYKAI] = {"Matematika", "Fizika", "Programavimas"};

    int pazymiai[STUDENTAI][DALYKAI] = {
        {8, 9, 7},
        {6, 8, 7},
        {10, 4, 9}
    };

    cout <<setw(15)<<left<< "Studentas";
    for(int i = 0; i < DALYKAI; i++) {
        cout <<setw(15)<<left<<dalykai[i];
    }

    cout <<setw(15)<<"Vidurkis";
    cout <<endl;
    for(int j = 0; j <STUDENTAI; j++) {
        double vidurkis;
        int suma = 0;
        cout <<setw(15)<<left<<studentai[j];
        for (int i = 0; i < DALYKAI; i++) {
            suma += pazymiai[j][i];
            cout << setw(15)<<left<<pazymiai[j][i];
        }
        vidurkis = (double)suma/(double)DALYKAI;
        cout<<setprecision(2) <<vidurkis;
        cout <<endl;
    }

    return 0;
}
