#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[5][3];
    char c;
    int gap = 'A' - 'a';

    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            cin >> c;
            arr[i][j] = (char)(c+gap);
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<< " ";
        }
        cout << endl;
    }
    //알파벳은 26개
    return 0;
}