#include <iostream>
#include <algorithm>
using namespace std;

void calc(int &a, int &b){
    if(a>b){
        a = a+25;
        b = b*2;
    }
    else {
        a = a*2;
        b = b+25;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    calc(a,b);
    cout << a << " " << b;
    return 0;
}