#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a=10, b;
    int remain[10]={}; //나머지 등장한 횟수를 저장할 배열
    int sum = 0;

    while(a>1){
        cin >> a >> b;
        remain[a%b]++;
        a/=b;
    }

    for(int i=0; i<10; i++){
        sum += remain[i] * remain[i];
    }

    cout << sum;
    return 0;
}