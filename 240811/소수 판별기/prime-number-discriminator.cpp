#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool isPrime = true;

    cin >> n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }

    cout << (isPrime?'P':'C');
    return 0;
}