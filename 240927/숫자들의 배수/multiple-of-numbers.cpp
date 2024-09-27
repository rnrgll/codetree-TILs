#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt=0;
    int number = 0;

    cin >> n;
    while(cnt!=2){
        number += n;
        cout << number << " ";
        if(number %5==0) cnt++;
    }
    return 0;
}