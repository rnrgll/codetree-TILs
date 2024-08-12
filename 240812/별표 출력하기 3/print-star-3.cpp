#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " " << " ";
        }

        for(int k=0; k<2*(n-i)-1;k++){
            cout << "*" << " ";
        }

        //필요 없음!!!
        // for(int j=0; j<i; j++){
        //     cout << " " << " ";
        // }

        cout << endl;
    }
    return 0;
}