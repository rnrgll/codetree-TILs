#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    int sum = 0;
    int age;
    while(true){
        cin >> age;
        if(age>=20&&age<30){
            cnt ++;
            sum += age;
        }
        else {
            break;
        }
    }

    double avg = (double)sum / cnt;
    cout << fixed;
    cout.precision(2);

    cout << avg;
    return 0;
}