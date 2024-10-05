#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int sum = 0;
    
    cin >> str;
    

    for(int i=0;i<str.length(); i++){
        if(isdigit(str[i])) sum+=(str[i]-'0');
    }
    cout << sum;
    return 0;
}