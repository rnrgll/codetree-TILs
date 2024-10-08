#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string &s){
    int l = s.length();
    for(int i=0; i<l/2; i++){
        if(s[i]!=s[l-1-i]) return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;

    cout << (isPalindrome(s)?"Yes":"No");
    return 0;
}