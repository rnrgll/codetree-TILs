#include <string>
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    string query;

    cin >> str >> query;

    for(int i=0; i<query.length(); i++){
        if(query[i]=='L'){
            str = str.substr(1) + str[0];
        }
        else {
            str = str[str.length()-1] + str.substr(0, str.length()-1);
        }
    }

    cout << str;
    return 0;
}