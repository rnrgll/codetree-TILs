#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=1;
    int square[10][10];
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            square[j][i] = cnt++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << square[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}