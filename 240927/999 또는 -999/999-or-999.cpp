#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int min = INT_MAX , max = INT_MIN;
    int n;
    while(true){
        cin >> n;
        if(abs(n)==999) break;

        min = min>n?n:min;
        max = max<n?n:max;

    }

    cout << max << " " << min;
    return 0;
}