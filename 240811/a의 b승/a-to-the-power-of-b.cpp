#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    int pow = 1;
    cin >> a >> b;

    for(int i=0; i<b; i++){
        pow *= a;
    }

    cout << pow;
    return 0;
}