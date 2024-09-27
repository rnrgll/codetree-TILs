#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int min = 10000;
    int max = -1;

    for(int i=0; i<10; i++){
        cin >> n;
        if(n<500){
            max = max<n?n:max;
        }
        else if(n>500){
            min = min>n?n:min;
        }
    }

    cout << max << " " << min;
    return 0;
}