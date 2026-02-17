#include <iostream>
using namespace std;
int main() {

    // string vaisius = "Vysnia";
    //
    // if (vaisius == "Obuolys") {
    //     cout << "Jus turite obuoli";
    // } else if (vaisius == "Vysnia") {
    //     cout << "Jus turite vysnia";
    // } else {
    //     cout << "Jus turite visai kita vaisiu";
    // }

    // int diena = 6;
    //
    // switch (diena) {
    //     case 1:
    //         cout <<"Pirmadienis";
    //         break;
    //     case 2:
    //         cout <<"Antradienis";
    //         break;
    //     case 3:
    //         cout <<"Treciadienis";
    //         break;
    //     case 4:
    //         cout <<"Ketvirtadienis";
    //         break;
    //     case 5:
    //         cout <<"Penktadienis";
    //         break;
    //     case 6:
    //         cout <<"Sestadienis";
    //         break;
    //     case 7:
    //         cout <<"Sekmadienis";
    //         break;
    //     default:
    //         cout<<"Tokios savaites dienos nera";
    // }

    // int diena;
    //
    // while(true) {
    //     cout <<"\nIveskite diena (1-7)"<<endl;
    //     cin>>diena;
    //     switch (diena) {
    //         case 1:
    //             cout <<"Pirmadienis";
    //             break;
    //         case 2:
    //             cout <<"Antradienis";
    //             break;
    //         case 3:
    //             cout <<"Treciadienis";
    //             break;
    //         case 4:
    //             cout <<"Ketvirtadienis";
    //             break;
    //         case 5:
    //             cout <<"Penktadienis";
    //             break;
    //         case 6:
    //             cout <<"Sestadienis";
    //             break;
    //         case 7:
    //             cout <<"Sekmadienis";
    //             break;
    //         default:
    //             cout<<"Tokios savaites dienos nera";
    //     }
    // }

    // int number;
    // cout <<"Iveskite sveikaji skaiciu "<<endl;
    // cin >> number;
    // int sum = 0;
    //
    // for (int i = 1; i < number; i++ ) {
    //     sum = sum + i; //sum += i;
    // }
    //
    // cout <<"Suma "<<sum<<endl;
    //
    // for (int i = 1; i <= number; i++) {
    //     cout <<i<<endl;
    // }

    // int x = 10;
    // while (x < 5) {
    //     cout<<"While ciklas"<<endl;
    // }
    //
    // do {
    //     cout <<"Do-while ciklas"<<endl;
    // } while(x < 5);
    //
    // for (int i = 1; i <= 10; i++) {
    //     if (i % 2 == 0) {
    //         cout<<i<<" - Skaicius dalijasi is 2"<<endl;
    //         continue;
    //     }
    //     cout << i << endl;
    // }

    int number;
    while (true) {
        cout<<"Iveskite skaiciu (0-baigti): ";
        cin>>number;

        if (number == 0) {
            break;
        };

        if (number < 0) {
            continue;
        }

        cout <<"Priimtas skaicius: "<<number<<endl;
    }

    return 0;
}
