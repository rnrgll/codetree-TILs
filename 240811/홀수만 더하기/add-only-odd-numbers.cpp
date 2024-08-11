#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, x, sum=0;
    cin >> n;

    for(int i=0;i<=n;i++){
        cin >> x;
        if(x%2!=0&&x%3==0){
            sum+=x;
        }
    }
    cout << sum;
    return 0;
}