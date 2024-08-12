#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        //첫번째 줄 공백 0개, 문자 7개
        //두번째 줄 공백 좌우 1개, 문자 5개
        //즉, i번째 줄 공백 좌우 i-1개, 문자 2(n-i)-1
        for(int j=0; j<i; j++) cout << "  ";
        for(int j=0; j<2*(n-i)-1;j++) cout << "* ";
        cout << endl;
    }

    for(int i=1; i<n; i++){
        //i번째 줄 문자 2i+1, 공백 n-i-1개
        for(int j=0; j<n-i-1;j++) cout << "  ";
        for(int j=0; j<2*i+1; j++) cout << "* ";
        cout << endl;
    }

    return 0;
}