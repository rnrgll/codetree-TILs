#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num;
    int arr[11] = {};

    while(true){
        cin >> num;
        if(num==0) break;

        num /= 10;
        arr[num]++;
    
    }

    for(int i=10; i>=1; i--){
        cout << i*10 << " - " << arr[i] << endl;
    }
    return 0;
}