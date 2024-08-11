#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int sum=0;
    int i;
    cin >> n;
    for(i=1;i<=100;i++){
        sum += i;
        if(sum>=n) break;
    }

    cout << i;
    return 0;
}