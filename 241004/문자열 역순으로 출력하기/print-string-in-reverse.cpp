#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 4;
    string arr[4];

    for(int i = 0 ; i<n; i++){
        cin >> arr[i];
    }

    for(int i=n-1; i>=0; i--){
        cout<< arr[i] << endl;
    }
    
    return 0;
}