#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a>> b;

    cout << a/b << ".";
    a = (a%b)*10;
    for(int i=0;i<20;i++){
        cout << a/b;
        a = (a%b) * 10;

    }
    return 0;
}