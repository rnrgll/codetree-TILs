#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;


    //삼항 연산자 말고 그냥 비교연산자로만 해도 됨
    cout << (a>=b) << endl;
    cout << (a>b) << endl;
    cout << (b>=a) << endl;
    cout << (b>a) << endl;
    cout << (a==b) << endl;
    cout << (a!=b) << endl;

    return 0;
}