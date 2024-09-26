#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char c = 'A';
    char z = 'Z';
    cin >> n;
    for(int i=1; i<=n ;i++){
        for(int j=1; j<=i; j++){
            cout << c;
            c++;
            //if((int)c > (int)z) c = 'A';
            //아래와 같이 간단히 작성할 수 있음
            if(c > 'Z') c = 'A';
        }
        cout << endl;
    }
    return 0;
}