#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 0;
    while(cnt < 3){
        cin >> n;
        if(n%2!=0) continue;
        cout << n/2 << endl;
        cnt++;

    }
    
    return 0;
}