#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    array<string, 5> arr = {"apple", "banana", "grape", "blueberry", "orange"};
    int cnt = 0;
    char c;
    cin >> c;

    for(int i=0; i<arr.size(); i++){
        if(arr[i][2]==c||arr[i][3]==c){
            cout << arr[i] << endl;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}