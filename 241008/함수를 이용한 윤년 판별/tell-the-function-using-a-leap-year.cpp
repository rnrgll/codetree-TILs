#include <iostream>
using namespace std;

bool isYoon(int n){
    if(n%4==0){
        if(n%100==0 && n%400!=0) return false;
        return true;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin >> y;
    cout << (isYoon(y)?"true":"false");
    return 0;
}