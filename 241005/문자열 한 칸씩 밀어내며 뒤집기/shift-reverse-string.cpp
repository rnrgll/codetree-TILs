#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int q;
    int type;

    cin >> str >> q;
    int l = str.length();

    for(int i=0; i<q; i++){
        cin >> type;
        switch(type){
            case 1: {
                str = str.substr(1) + str[0];
                break;
            }
            case 2: {
                str = str[l-1] + str.substr(0,l-1);
                break;
            }
            case 3: {
                string ans = "";
                for(int j=l-1; j>=0; j--) ans += str[j];
                str = ans;
                break;
            }
        }
        cout << str << endl;
    }
    return 0;
}