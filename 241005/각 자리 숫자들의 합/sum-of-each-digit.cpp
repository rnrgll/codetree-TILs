#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string s;
    int sum=0;

    s = to_string(n);
    for(int i=0; i<s.length(); i++){
        //sum += atoi(s[i]); //단일 문자를 숫자로 변환하는 경우에는 atoi를 사용할 수 없다. atoi는 문자열 전체를 정수로 변환하는 함수다.
        sum += s[i] - '0';
    }

    cout << sum;
    return 0;
}