#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool isMul = true;
    for(int i=0;i<5;i++){
        cin >> n;
        if(n%3!=0){
            isMul = false;
            break;
        }
    }
    cout << isMul;
    return 0;
}