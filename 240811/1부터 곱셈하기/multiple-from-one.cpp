#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int i=1;
    int prod = 1;

    cin >> n;
    for(i;i<=10;i++){
        prod*=i;
        if(prod>=n) break;
    }

    cout << i;
    return 0;
}