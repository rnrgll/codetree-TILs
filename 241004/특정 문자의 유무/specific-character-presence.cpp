#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    bool eeExists = false;
    bool abExists = false;
    string str;

    cin >> str;

    for(int i=0; i<str.length()-1; i++){
        if(str[i]=='e'&&str[i+1]=='e'){
            eeExists = true;
        }
        if(str[i]=='a'&&str[i+1]=='b'){
            abExists = true;
        }
                
    }

    cout << (eeExists?"Yes":"No") << " " << (abExists?"Yes":"No");


    return 0;
}