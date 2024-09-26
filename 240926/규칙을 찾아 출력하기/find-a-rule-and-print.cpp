#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    //가장자리는 별표
    //(1,1)~(1,n-2): 공백
    //(2,1)까지 별표, (2,2)~(2,n-2)공백

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0||i==n-1||j==0||j==n-1) cout << "*";
            else if(j<i){
                cout << "*";
            }
            else {
                cout << " ";
            }

            cout << " ";
        }
        cout << endl;
    }
    return 0;
}