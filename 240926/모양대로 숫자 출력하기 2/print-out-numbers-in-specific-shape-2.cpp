#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 2;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << cnt << " ";
            cnt +=2;
            if(cnt==10) cnt =2;
        }
        cout << endl;
    }
    return 0;
}