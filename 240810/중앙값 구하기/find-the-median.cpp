#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;

    if(a>b){
        if(a>c){
            cout << (b>c?b:c);
        }
        else cout << a;
    }
    else {
        if(b>c)
        {
            cout << (a>c?a:c);
        }
        else cout << b;
    }
    return 0;
}