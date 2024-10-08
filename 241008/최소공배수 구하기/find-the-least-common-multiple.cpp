#include <iostream>
#include <algorithm>
using namespace std;

int findLCM(int n, int m){
    int minNum = min(n,m);
    int result = minNum;
    for(int i=minNum; i<=n*m; i+=minNum){
        if(i%n==0 && i%m==0){
            result = i;
            break;
        }
    }

    return result;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    cout << findLCM(n,m);
    return 0;
}