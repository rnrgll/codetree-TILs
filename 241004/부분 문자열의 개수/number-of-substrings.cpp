#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;
    string a, b;
    cin >> a >> b;

    for(int i=0; i<a.length()-b.length()+1; i++){
        string sub = a.substr(i, b.length());
        if(sub==b) cnt++;
    }

    cout << cnt;
    return 0;
}