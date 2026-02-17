#include <iostream>
#include <cmath>
#include <format>
#include <string>
using namespace std;

int main() {
    // cout << "Hello, World!" << endl;
    // int pirmasSkaicius = 5;
    //    // double antrasSkaicius = 3.9;
    // int test = (int) antrasSkaicius;
    // cout <<pirmasSkaicius<<endl;
    // cout <<antrasSkaicius << endl;
    // cout << test;

    // int skaicius = 5;
    // skaicius;
    // cout <<skaicius++;

    // int pirmasSkaicius = 5;
    // double antrasSkaicius = 3.9;
    //
    // {
    //   int newSk = pirmasSkaicius + (int) antrasSkaicius;
    //     cout <<"23 eilute kodo isveda: "<<newSk<<endl;
    // }
    // cout <<"25 eilute kodo isveda: "<<newSk<<endl;

    string vardasPavarde;

    cout <<"Iveskite varda ir pavarde"<<endl;
    getline(cin, vardasPavarde);
    cout <<format("Sveiki, {0}!\n", vardasPavarde);


    return 0;
}
