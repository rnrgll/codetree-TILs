#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    str[1] = str[str.length()-2] = 'a';

    cout << str;
    return 0;
}