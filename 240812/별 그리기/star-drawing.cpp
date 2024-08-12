#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i=0; i<n;i++){
        for(int j=0; j<n-i-1; j++) cout <<" ";
        for(int j=0; j<2*i+1; j++) cout<<"*";
        cout << endl;
    }

    for(int i=n+1; i<2*n; i++){
        //4번째 줄에서 공백은 1개, 문자는 3개
        //5번째 줄에서 공백은 2개 문자는 1개
        //i번째 줄에서 공백은 i-n개, 문자는 2(2n-i)-1
        for(int j=0; j<i-n; j++) cout << " ";
        for(int j=0; j<2*(2*n-i)-1;j++) cout << "*";
        cout << endl;
    }
    return 0;
}