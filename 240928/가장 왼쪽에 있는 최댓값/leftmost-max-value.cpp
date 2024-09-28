#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[1001];


    //입력
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }


    //연산
    int idx = n+1;
    int max = 0;
    int max_idx = 0;
    while(idx!=1){
        max = 0; max_idx=0; //초기화를 잊지말고 꼭 하자!
        for(int i=1; i<idx; i++){
            if(max<arr[i]){
                max = arr[i];
                max_idx = i;
            }
        }
        cout << max_idx << " ";
        idx = max_idx;
    }


    return 0;
}