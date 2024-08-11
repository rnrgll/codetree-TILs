#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    // for(int c=0, k=n; c<5; k++){
    //     if(k%n==0){
    //         cout << k << " ";
    //         c++;
    //     }
    // }
    
    //더 간결한 코드로 가능
    for(int i=n; i<=n*5; i+=n){
        cout << i << " ";
    }
    return 0;
}