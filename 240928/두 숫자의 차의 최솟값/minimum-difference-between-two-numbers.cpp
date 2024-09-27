#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[10];
    int min = 1000;
    int gap = 0;

    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];


    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            gap = abs(arr[i] - arr[j]);
            min = min>gap?gap:min;
        }
    }

    cout << min;
    return 0;
}