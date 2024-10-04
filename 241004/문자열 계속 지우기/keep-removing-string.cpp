#include <string>
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;

    cin >> a >> b;

    //b문자열 길이
    int bLength = b.length();

    //부분 문자열 탐색
    while(a.find(b)!=string::npos){
        a.erase(a.find(b),bLength);
    }
    

    cout << a;

    return 0;
}