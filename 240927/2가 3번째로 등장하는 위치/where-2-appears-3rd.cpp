#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[100];
    int idx, cnt = 0;

    //입력
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];

    //연산
    for(int i=0; i<n; i++){
        if(arr[i]==2) cnt++;

        if(cnt==3){
            idx = i;
            break;
        }
    }

    //출력
    cout << idx+1;
    return 0;
}