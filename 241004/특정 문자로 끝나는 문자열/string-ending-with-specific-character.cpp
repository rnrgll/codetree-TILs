#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string arr[10];
    char c;
    int cnt = 0;

    //입력
    for(int i=0; i<10;i++){
        cin >> arr[i];
    }
    cin >> c;

    for(int i=0; i<10; i++){
        if(arr[i][arr[i].length()-1]==c) {
            cout << arr[i] << endl;
            cnt++;
        }
    }


    if(cnt==0) cout << "None";
    return 0;
}