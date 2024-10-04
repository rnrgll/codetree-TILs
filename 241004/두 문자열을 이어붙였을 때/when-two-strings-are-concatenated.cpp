#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    bool isSame = true;
    cin >> a >> b;


    string s1 = a + b;
    string s2 = b+a;

    for(int i=0; i<s1.length(); i++){
        if(s1[i]!=s2[i]) {
            isSame = false;
            break;
        }

    }

    cout << (isSame?"true":"false");
    return 0;
}