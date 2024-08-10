#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, result;
    cin >> a>> b;
    if(a>b) result = a-b;
    else result = b-a;

    cout << result;
    return 0;
}