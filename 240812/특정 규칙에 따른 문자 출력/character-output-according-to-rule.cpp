#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        //i번째 열에서 공백은 n-i개, 문자는 i개
        for(int j=0; j<n-i; j++) cout << "  ";
        for(int j=0; j<i; j++) cout << "@ ";
        cout << endl;
    }

    for(int i=n-1; i>=1; i--){
        //i번째 열에서 공백은 n-i, 문자는 i개
        for(int j=0; j<i; j++) cout << "@ ";
        //for(int j=0; j<n-i; j++) cout << "  "; //출력할 필요 없음
        cout << endl;
    }

    return 0;
}