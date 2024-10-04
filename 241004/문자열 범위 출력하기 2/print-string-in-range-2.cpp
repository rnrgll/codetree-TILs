#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int n;
    int length;
    
    cin >> str >> n;
    length = str.length();

    for(int i=0; i<n; i++){
        cout << str[length-1-i];
    }
    return 0;
}