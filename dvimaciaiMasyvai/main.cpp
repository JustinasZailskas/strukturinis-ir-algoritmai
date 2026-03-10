#include <iostream>
using namespace std;

int main() {
    int eilutes = 3, stulpelis = 3;
    int masyvas[eilutes][stulpelis];

    cout <<"Iveskite "<<eilutes<<"x"<<stulpelis<<" masyvo elementus"<<endl;

    for(int i = 0; i < eilutes; i++) {
        cout<<i+1<<" - eilute"<<endl;
        for(int j = 0; j < stulpelis; j++) {
            cout<<"Elementas ["<<i<<"]["<<j<<"] : "<<endl;
            cin >> masyvas[i][j];
        }
    }

    for(int i = 0; i < eilutes; i++) {
        for(int j = 0; j < stulpelis; j++) {
            cout << masyvas[i][j] << " ";
        }
        cout <<endl;
    }

    for(int i = 0; i < eilutes; i++) {
        int eilutesSuma = 0;
        for(int j = 0; j < stulpelis; j++) {
            cout << masyvas[i][j] << " ";
            eilutesSuma = eilutesSuma + masyvas[i][j]; // eilutesSuma += masyvas[i][j];
        }
        cout<<" Suma: "<<eilutesSuma<<endl;
    }

    for(int j = 0; j < stulpelis; j++) {
        int maksElemStulp = masyvas[0][j];
        for(int i = 1; i < eilutes; i++) {
            if (maksElemStulp < masyvas[i][j]) {
                maksElemStulp = masyvas[i][j];
            }
        }
        cout<<"Stulpelio "<<j+1<<" didziausias elementas yra: "<<maksElemStulp<<endl;
    }


    return 0;
}
