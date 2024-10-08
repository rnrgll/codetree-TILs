#include <iostream>
#include <string>
using namespace std;

int countAlpha(string &s){
    int alpha[26]={};
    int cnt = 0;
    for(int i=0; i<s.length(); i++){
        alpha[(int)(s[i]-'a')]++;
    }

    for(int i=0; i<26; i++){
        if(alpha[i]>0) cnt++;
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string s; int cnt=0;
    cin >> s;

    if(countAlpha(s)>=2) cout <<"Yes";
    else cout << "No";

    return 0;
}