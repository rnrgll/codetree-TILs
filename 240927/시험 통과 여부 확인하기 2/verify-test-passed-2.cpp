#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int score[4];
    int sum = 0;
    double avg = 0;
    int cnt = 0;

    cin >> n;
    for(int i=0; i<n; i++){
        sum = 0; //초기화 필수!!
        for(int j=0; j<4; j++){
            cin >> score[j];
            sum += score[j];
        }
        avg = (double)sum / 4;
        if(avg>=60){
            cout << "pass" << endl;
            cnt++;

        }
        else cout << "fail" << endl;

    }
    cout << cnt;
                                                                                                                         
    return 0;
}