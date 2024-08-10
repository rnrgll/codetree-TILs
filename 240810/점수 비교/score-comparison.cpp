#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int aMath, aEng;
    int bMath, bEng;
    cin >> aMath>>aEng>>bMath>>bEng;
    cout <<(aMath>bMath && aEng>bEng);
    return 0;
}