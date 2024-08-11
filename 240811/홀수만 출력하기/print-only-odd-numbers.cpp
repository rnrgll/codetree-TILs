#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, x;
    cin >> n;


    for(int i=0; i<n; i++){
        //입력받기
        cin >> x;
        if(x%2==1&&x%3==0) cout << x << endl;
    }
    return 0;
}