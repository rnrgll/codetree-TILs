#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;
    string a, input;

    cin >> n >> a;
    for(int i=0; i<n; i++){
        cin >> input;
        if(input == a) cnt++;
    }

    cout << cnt;
    return 0;
}