#include <iostream>
#include <string>
using namespace std;

int idx=-1;


bool isSame(string &ostr, string &substr){
    for(int j=0; j<substr.length(); j++){
        if(ostr[j]!=substr[j]) return false;
    }
    return true;
}

void findSubString(string &ostr, string &substr){
    for(int i=0; i<=ostr.length()-substr.length(); i++){
        string ostr_sub = ostr.substr(i,substr.length());
        if(isSame(ostr_sub,substr)){
            idx = i;
            return;
        }
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
    string ostr, substr;
    cin >> ostr >> substr;

    findSubString(ostr, substr);

    cout << idx;
    return 0;
}