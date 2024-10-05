#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s1, s2;
    string d1 ="", d2="";
    cin >> s1 >> s2;

    for(int i=0; i<s1.length(); i++){
        if(isdigit(s1[i])){
            d1+=s1[i];
        }
    }
    for(int i=0; i<s2.length(); i++){
        if(isdigit(s2[i])){
            d2+=s2[i];
        }
    }

    cout << stoi(d1) + stoi(d2);
    return 0;
}