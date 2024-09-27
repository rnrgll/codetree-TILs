#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 10;
    int n;
    int arr[10];

    int sum =0;
    double avg = 0;

    for(int i=0; i<10; i++){
        cin >> n;
        if(n==0){
            cnt = i; 
            break;
        }

        arr[i] = n;
        sum += arr[i];
    }

    avg = double(sum) / cnt;

    cout << fixed;
    cout.precision(1);

    cout << sum << " " << avg;
    return 0;
}