#include <iostream>
using namespace std;
int remain(int, int);
int main() {
    // 여기에 코드를 작성해주세요.
    int n1 =2, n2 = 4, result=0;
    int n;

    cin >> n;
    if(n==1) cout << n1;
    else if(n==2) cout << n2;
    else {
        for(int i=3;i<=n;i++){
            result = remain(n1,n2);
            n1=n2; n2=result;
        }
        cout << result;
    }
    return 0;
}

int remain(int n1, int n2){
    return (n1*n2)%100;
}