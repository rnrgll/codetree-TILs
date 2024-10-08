#include <iostream>
using namespace std;

int findGCD(int n, int m){
    int gcd = 1;
    int i;
    i = (n<m?n:m);

    for(int k=1; k<i; k++){
        if(n%k==0 && m%k==0) gcd = k;
    }

    return gcd;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, gcd;
    cin >> n >> m;

    gcd = findGCD(n,m);
    cout << gcd;
    return 0;
}