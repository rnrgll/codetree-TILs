#include <string>
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c1, c2;
    string str;

    cin >> str;

    c1 = str[0];
    c2 = str[1];

    for(int i=0; i<str.length(); i++){
        if(str[i]==c2) str[i]=c1;
    }
    cout << str;

    return 0;
}