#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    // for(int i=n;i>0;i--){
    //     for(int j=0; j<i; j++) cout <<"*";

    //     for(int k=0; k<n-i;k++) cout << "  ";

    //     for(int j=0; j<i; j++) cout <<"*";
    //     cout << endl;
        
    // }

    //더 쉽게 풀기
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++) cout << "*";
        for(int k=0; k<2*i; k++) cout << " ";
        for(int j=0; j<n-i; j++) cout << "*";
        cout << endl;
    }
    return 0;
}