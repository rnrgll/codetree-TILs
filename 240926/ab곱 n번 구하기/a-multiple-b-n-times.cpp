#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a, b;
    int num = 1;
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        num = 1;
        for(int j=a; j<=b; j++){
            num *= j;
        }

        cout << num << endl;
    }
    return 0;
}