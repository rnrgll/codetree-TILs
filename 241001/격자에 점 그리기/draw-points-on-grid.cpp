#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m, n, r, c, cnt = 1;
    int arr[9][9] = {};

    cin >> n >> m;

    for(int i=0; i<m; i++){
        cin >> r >> c;
        arr[r-1][c-1] = cnt++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}