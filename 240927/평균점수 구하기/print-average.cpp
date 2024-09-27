#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double score[8];
    double sum = 0.0;
    double avg;

    for(int i=0; i<8; i++){
        cin >> score[i];
        sum += score[i];
    }

    avg = sum/8;

    cout << fixed;
    cout.precision(1);
    cout << avg;
    return 0;
}