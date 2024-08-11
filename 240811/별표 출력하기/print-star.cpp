#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, i;
    cin >> n;
    for(i=1; i<=n; i++){
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        cout << endl;        
    }
    i = n-1;
    for(i;i>0;i--){
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        cout << endl;

    }
    return 0;
}