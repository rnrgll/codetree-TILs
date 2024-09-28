#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2][4] = {};

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }


    double avg_row[2];
    double avg_colum[4];
    double avg;

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            avg_row[i] += arr[i][j];
            avg_colum[j] += arr[i][j];
            avg += arr[i][j];
        }
    }

    cout << fixed;
    cout.precision(1);

    for(int i=0; i<2; i++){
        cout << avg_row[i]/4 << " ";
    }
    cout << endl;

    for(int i=0; i<4;i++){
        cout << avg_colum[i]/2 << " ";
    }
    cout << endl;


    cout << avg/8;
    
    return 0;
}