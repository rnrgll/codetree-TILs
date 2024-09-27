#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10] = {};
    int num;
    while(true){
        cin >> num;
        if(num==0) break;

        num /=10;
        arr[num]++;
    }


    for(int i=1; i<10; i++){
        cout<<i << " - " << arr[i] << endl;
    }
    return 0;
}