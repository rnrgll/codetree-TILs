#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char c;
    int index;
    bool exists = false;
    
    cin >> s >> c;
    for(int i=0; i<s.length(); i++){
        index = s.find(c);
        if(index!=string::npos){
            exists = true;
            break;
        }
    }

    cout << (exists?to_string(index):"No");


    // 여기에 코드를 작성해주세요.

    return 0;
}