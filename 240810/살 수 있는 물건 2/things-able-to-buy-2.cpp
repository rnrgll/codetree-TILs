#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    cin >> m;

    if(m>=3000) cout << "book";
    else if(m>=1000) cout << "mask";
    else if(m>=500) cout << "pen";
    else cout << "no";
    return 0;
}