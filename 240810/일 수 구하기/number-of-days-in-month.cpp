#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m, d;
    cin >> m;

    if(m<=7){
        d = m%2==0?30:31; //짝수달은 30, 홀수 달은 31
    }
    else {
        d = m%2==0?31:30;
    }

    if(m==2) d = 28;

    cout << d;

    return 0;
}