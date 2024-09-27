#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[100];
    int idx =0;
    cin >> n;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        if(num%2==0){
            arr[idx] = num;
            idx++;
        }
    }

    for(int i=0; i<idx; i++){
        cout << arr[i] << " ";
    }
    return 0;
}