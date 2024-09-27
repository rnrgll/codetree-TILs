#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int idx=0;
    int num;

    for(int i=0; i<10; i++){
        cin >> num;
        if(num==0) {
            idx = i-1;
            break;
        }
        arr[i] = num;
    }

    for(int i = idx; i>=0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}