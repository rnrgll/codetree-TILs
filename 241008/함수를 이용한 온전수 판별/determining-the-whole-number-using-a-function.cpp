#include <iostream>
using namespace std;

bool isMagicNum(int n){
    if(n%2==0) return false;
    if(n%10==5) return false;
    if(n%3==0&&n%9!=0) return false;


    return true;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, cnt = 0;
    cin >> a >> b;

    for(int i=a; i<=b; i++){
        if(isMagicNum(i)) cnt++;
    }

    cout << cnt;

    return 0;
}