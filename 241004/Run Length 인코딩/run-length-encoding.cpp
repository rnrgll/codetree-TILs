#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    string ans="";
    char c;
    int cnt;
    // 여기에 코드를 작성해주세요.


    cin >> str;
    c = str[0];
    cnt = 1;
    for(int i=1; i<str.length();i++){
        if(c!=str[i]){
            //정답에 추가
            ans += c + to_string(cnt);
            cnt = 1;
            c = str[i];
        }
        else cnt++;
    }
    ans += c + to_string(cnt);

    cout << ans.length() << endl;
    cout << ans;
    return 0;
}