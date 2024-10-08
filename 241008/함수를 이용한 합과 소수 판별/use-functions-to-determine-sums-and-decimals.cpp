#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n==1) return false;
    for(int i=2; i<n; i++){
        if(n%i==0) return false;
    }
    return true;
}

bool isSumEven(int n){
    int sum = 0;

    for(int i=n; i>0; i/=10){
        sum += i%10;
    }

    if(sum%2==0) return true;
    else return false;

}


int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, cnt=0;

    cin >> a >> b;
    for(int i=a; i<=b; i++){
        if(isPrime(i)&&isSumEven(i)) cnt++;
    }

    cout << cnt;
    return 0;
}