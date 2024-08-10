#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    cin >> m;
    if(m>=3 && m<12)
    {
        if(m>=9) cout << "Fall";
        else if(m>=6) cout << "Summer";
        else cout << "Spring";
    }
    else cout << "Winter";
    return 0;
}