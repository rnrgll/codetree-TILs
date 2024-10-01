#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=1;
    int square[10][10] = {};
    bool isUp = true;
    //입력
    cin >> n;

    //열 마지막 ~ 열 처음까지 반복, 방향 바꿔서
    for(int i=n-1; i>=0; i--){
        if(isUp){
            for(int j=n-1; j>=0; j--){
                square[j][i] = cnt++;
            }
        }
        else{
            for(int j=0; j<n; j++){
                square[j][i] = cnt++;
            }
        }
        isUp = !isUp;
    }


    //출력
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<square[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}