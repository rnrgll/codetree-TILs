#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s = "";
    string input;
    int n;
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> input;
        s.append(input);
    }

    for(int i=0; i<s.length(); i++){
        if(i!=0 && i%5==0){
            cout << endl;
        }
        cout << s[i];

    }
    return 0;
}