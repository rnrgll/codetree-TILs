#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end;
    int cnt = 0;
    int n = 2; //1, 자기 자신은 무조건 포함

    cin >> start >> end;

    for(int k=start; k<=end; k++){
        n = 2; //n을 항상 초기화한다.
        if(k<=2) continue;
        for(int i=2; i<k; i++){
            if(k%i==0){
                n++;
            }

            if(n>3) break;
        }
        if(n==3) {
            cnt++;
        }
    }

    cout << cnt;



    return 0;
}