#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 1;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%2!=0){
            for(int j=0; j<n; j++){
                 cout << n*(i-1)+1 +j << " ";
            }
        }
        else {
            for(int j=n-1;j>=0;j--){
                cout << n*(i-1)+1 +j << " ";
            }
        }
        cout << endl;

    }
    
    return 0;
}