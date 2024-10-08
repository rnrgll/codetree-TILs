#include <iostream>
#include <algorithm>
using namespace std;

int findMin(int a, int b, int c){
    int mNum = min(a,b);
    mNum = min(mNum, c);

    return mNum;

}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b ,c;

    cin >> a >> b >> c;

    cout << findMin(a,b,c);

    return 0;
}