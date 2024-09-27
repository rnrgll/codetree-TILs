#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    int num;
    int cnt = 0;
    cin >> n >> m;
    
    for(int i=0; i<n; i++){
        cin >> num;
        if(m==num) cnt++;
    }

    cout << cnt;
    return 0;
}