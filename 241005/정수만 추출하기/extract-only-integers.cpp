#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s1, s2;
    int sum=0;
    int idx;    

    cin >> s1 >> s2;

    idx = s1.length(); //idx가 0인 경우 -> 빈 문자열이 stoi에 전달되어 에러가 발생하므로 기본값으로 문자열 끝으로 설정
    for(int i=0; i<s1.length(); i++){
        if(!isdigit(s1[i])) {
            idx = i;
            break;
        }
    }

    sum += stoi(s1.substr(0,idx));
    
    idx = s2.length();
    for(int i=0; i<s2.length(); i++){
        if(!isdigit(s2[i])) {
            idx = i;
            break;
        }
    }

    sum += stoi(s2.substr(0,idx));

    cout << sum;
    return 0;
}