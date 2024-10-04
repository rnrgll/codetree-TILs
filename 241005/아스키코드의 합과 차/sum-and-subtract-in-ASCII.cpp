#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c1, c2;
    cin >> c1 >> c2;

    int sum = (int)c1 + (int)c2;
    int sub = (int)c1 - (int)c2;
    
    cout << sum << " " << abs(sub);
    return 0;
}