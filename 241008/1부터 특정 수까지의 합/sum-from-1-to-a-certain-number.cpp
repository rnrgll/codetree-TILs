#include <iostream>
using namespace std;

int func(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    return sum/10;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << func(n);
    return 0;
}