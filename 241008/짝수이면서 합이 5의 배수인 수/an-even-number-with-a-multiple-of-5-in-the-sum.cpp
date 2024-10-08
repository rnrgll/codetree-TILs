#include <iostream>
using namespace std;

bool isTheNumber(int n){
    int sum = 0;
    for(int i=n; i>0; i/=10){
        sum += i%10;
    }
    if(n%2==0 && sum % 5 ==0) return true;
    else return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << (isTheNumber(n)?"Yes":"No");
    return 0;
}