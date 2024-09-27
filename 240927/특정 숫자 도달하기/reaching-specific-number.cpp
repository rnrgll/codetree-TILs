#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    double avg = 0.0;
    int cnt = 0;
    int arr[10];

    for(int i=0; i<10; i++){
        int num;
        cin >> num;
        if(num >=250) break;

        arr[i] = num;
        sum += num;
        cnt++;

    }

    avg = (double)sum / cnt;

    cout << fixed;
    cout.precision(1);

    cout<<sum << " " << avg;
    return 0;
}