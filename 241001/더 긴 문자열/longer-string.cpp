#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s1, s2;
    int l1, l2;

    cin >> s1 >> s2;
    l1 = s1.length();
    l2 = s2.length();

    if(l1>l2) cout << s1 << " " << l1;
    else if(l1==l2) cout << "same";
    else cout << s2 << " " << l2;
    return 0;
}