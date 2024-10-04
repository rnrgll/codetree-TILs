#include <string>
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int n;
    
    //입력
    cin >> str;

    while(str.length()!=0){
        cin >> n;
        if(n>=str.length()) n = str.length()-1;

        str.erase(n,1);
        cout << str << endl;
    }
    return 0;
}