#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string arr[10];
    int totalLength = 0, cnt = 0;
    char a = 'a';

    cin >> n;
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i][0]==a) cnt++;
        totalLength += arr[i].length();
    }

    cout << totalLength << " " << cnt;
    return 0;
}