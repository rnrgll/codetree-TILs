#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, input;
    int arr[1001]={};
    cin >> n;

    //입력
    for(int i=0; i<n; i++) {
        cin >> input;
        arr[input]++;
    }

    int idx;
    //연산
    for(idx=1000;idx>=1;idx--){
        if(arr[idx]==1){
            cout<<idx;
            break;
        }
    }
    if(idx==0){
        cout << -1;
    }

    return 0;
}