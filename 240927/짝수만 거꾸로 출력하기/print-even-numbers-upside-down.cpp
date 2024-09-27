#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[100];
    int idx=0;
    int num;


    cin >> n;
    for(int i=0; i<n; i++){
        cin >> num;
        if(num%2==0){
            //짝수면 배열에 저장
            arr[idx] = num;
            //저장 후 인덱스 증가
            idx++;
        }
    }

    for(int i=idx-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}