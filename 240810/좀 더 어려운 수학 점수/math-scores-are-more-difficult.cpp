#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int am, ae, bm, be;
    cin >> am >> ae>>bm>>be;

    if(am==bm){
        cout << (ae>be?'A':'B');
    }

    else {
        cout << (am>bm?'A':'B');
    }
    return 0;
}