#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[15][15] = {};
    
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(j==0) arr[i][j] = 1;
            else arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}