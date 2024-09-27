#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10] ={};
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        arr[num]++;
    }

    for(int i=1; i<10; i++){
        cout << arr[i] << endl;
    }

    return 0;
}