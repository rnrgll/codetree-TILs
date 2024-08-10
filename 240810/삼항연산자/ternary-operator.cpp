#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int score;
    bool isPass;
    
    cin >> score;

    isPass = score==100?true:false;
    
    if(isPass) cout << "pass";
    else cout << "failure";
    
    return 0;
}