#include <string>
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    int l = str.length();

    cout << str<<endl;
    for(int i=0; i<l; i++){
        str = str[l-1] + str.substr(0,l-1);
        cout << str << endl;
    }
    return 0;
}