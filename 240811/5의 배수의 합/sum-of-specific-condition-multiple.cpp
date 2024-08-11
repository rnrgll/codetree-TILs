#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int sum = 0;
    int min, max;

    cin >> a >> b;
    if(a>b){
        min = b; max = a;
    }
    else {
        min = a; max = b;
    }

    for(int i=min; i<=max; i++){
        if(i%5==0) sum+=i;
    }
    cout << sum;
    return 0;
}