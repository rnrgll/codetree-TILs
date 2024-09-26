#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    //i줄 i, n-i+1 반복해서 출력
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j%2!=0) cout<<i;
            else cout << n-i+1;
        }
        cout << endl;
    }
    return 0;

}