#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cin >> str;


    for(int i=0; i<str.length(); i++){
        if(str[i]>='A'&&str[i]<='Z'){
            //대문자인 경우 소문자로 변환한다.
            str[i] = str[i]-'A'+'a';
        }
        else{
            //소문자인 경우 대문자로 변환한다.
            str[i] = str[i] - 'a' + 'A';
        }
    }
    cout << str;
    return 0;
}