#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        //i번째일 때, 공백은 n-i-1번 , 문자는 2i+1번 출력

        //공백 출력은
        for(int j=0; j<n-i-1; j++) cout << "  ";
        for(int k=0; k<2*i+1; k++) cout << "* ";
        cout << endl;
        

    }
    return 0;
}