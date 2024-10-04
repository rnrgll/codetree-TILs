#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cntee=0, cnteb=0;
    string str;

    cin >> str;
    for(int i=0; i<str.length()-1; i++){
        string substr = str.substr(i,2);
        if(substr == "ee") cntee++;
        else if(substr=="eb") cnteb++;
    }
    cout << cntee << " " << cnteb;
    return 0;
}