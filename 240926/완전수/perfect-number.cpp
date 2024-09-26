#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    //진약수 : n을 나누어 떨어지게 하는 양의 정수 중에서 n이 아닌 수를 말한다.
    //진약수의 총합이 n이면 n을 완전수라고 한다.

    //start~end 사이의 수 중 완전수의 개수를 세는 프로그램

    int start, end; //입력
    int sum = 1; //진약수의 합을 저장할 변수 (1은 무조건 포함이므로 1부터 시작)
    int cnt = 0; //완전수의 개수를 카운트할 변수
    cin >> start >> end;

    for(int i=start; i<=end; i++){
        sum = 1; //sum 반드시 초기화해주기!
        for(int j=2; j<i; j++){
            if(i%j==0){
                //j가 진약수라면 합계에 더해준다.
                sum += j;
                if(sum > i) break; //합계가 n을 넘어가면 반복문 종료
            }
        }
        if(sum==i) cnt++;
    }


    cout << cnt;
    return 0;
}