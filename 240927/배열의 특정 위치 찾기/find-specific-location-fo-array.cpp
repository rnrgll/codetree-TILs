#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum_1 = 0;
    int sum_2 = 0;
    double avg = 0;
    int cnt = 0;

    for(int i=1; i<=10; i++){
        cin >> arr[i-1];

        if(i%2==0) sum_1+=arr[i-1];
        if(i%3==0) {
            sum_2 += arr[i-1];
            cnt++;
        }
    }

    avg = (double)sum_2 / cnt;


    cout << fixed;
    cout.precision(1);
    cout << sum_1 << " " << avg;
    return 0;
}