#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2, cnt=0;
    cin >> n1 >> n2;

    n1 += n2;

    string s = to_string(n1);
    for(int i=0; i<s.length(); i++){
        if(s[i]=='1') cnt++;
    }

    cout << cnt;
    return 0;
}