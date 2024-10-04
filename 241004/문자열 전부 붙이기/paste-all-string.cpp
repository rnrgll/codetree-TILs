#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string ans = "";
    string s;
    int n;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        ans.append(s);
    }
    cout << ans;
    return 0;
}