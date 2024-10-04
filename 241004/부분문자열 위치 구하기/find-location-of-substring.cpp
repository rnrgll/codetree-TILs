#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    string ostr;
    cin >> str >> ostr;
    int index;

    index = str.find(ostr);
    if(index == string::npos) index = -1;


    cout << index;

    
    return 0;
}