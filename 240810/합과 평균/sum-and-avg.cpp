#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a>>b;
    int sum;
    double avg;

    sum = a+b;
    avg = (double)sum/2;

    cout << sum << " " << avg;

    return 0;
}