#include <string>
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;

    s.erase(1,1);
    s.erase(s.length()-2,1);

    cout << s; 
    return 0;
}