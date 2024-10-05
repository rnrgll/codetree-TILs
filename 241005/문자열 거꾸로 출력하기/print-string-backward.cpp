#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string input;

    while(true){
        cin >> input;
        if(input=="END") break;

        for(int i=0; i<input.length(); i++){
            cout << input[input.length()-1-i];
        }
        cout<<endl;
    }
    
    
    
    return 0;
}