#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum_1 = 0;
    int sum_2 = 0;
    for(int i=0; i<10; i++){
        cin >> arr[i];
        if(i%2==0){ //홀수 번째 입력 받은 정수
            sum_1 += arr[i];
        }
        else { //짝수 번째 입력 받은 정수
            sum_2 += arr[i];
        }
    }

    if(sum_1>sum_2) cout << sum_1 - sum_2;
    else cout << sum_2 - sum_1;
    return 0;
}