#include <string>
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    //헤더 없이 아스키코드로 해결해보기
    string str;

    cin >> str;


    for(int i=0; i<str.length(); i++){
        if(str[i]<'A'||str[i]>'z') {
            continue;
        }
        if(str[i]>='a'&&str[i]<='z'){
            
            str[i] = (char)(str[i]-'a'+'A');
        }

        cout << str[i];
    }
    return 0;
}