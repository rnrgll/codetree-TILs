#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;
    int sum = 0;
    int num;

    for(int i=0; i<10; i++){
        cin >> num;
        if(num==0) break;

        if(num%2==0){
            cnt++;
            sum+= num;
        }
    }

    cout << cnt << " " << sum;
    return 0;
}