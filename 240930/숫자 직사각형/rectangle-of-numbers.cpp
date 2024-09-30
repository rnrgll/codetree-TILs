#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0;
    int n,m;
    int arr[100][100];
    cin >> n >> m;

    //이차원 배열 써서 해결하기
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j] = ++cnt;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}