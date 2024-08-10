#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    // 변수 선언
    int h, w;
    double bmi;
    bool isFat;

    //입력
    cin >> h >> w;
    //bmi 계산
    bmi = (10000 * w) / (double)(h*h);

    //비만 여부 b>=25면 비만
    if(bmi>=25) isFat = true;
    else isFat = false;

    //출력
    cout << (int)bmi<<endl;
    if(isFat) cout << "Obesity";
    return 0;
}