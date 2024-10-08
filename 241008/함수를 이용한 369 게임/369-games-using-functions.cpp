#include <iostream>
using namespace std;

bool has369(int n) {
    for(int i=n; i>0; i/=10){
        if((i%10)!=0 && (i%10)%3==0) return true;
    }
    return false;
}

bool isMultipleOf3(int n){
    if(n%3==0) return true;
    else return false;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    int cnt = 0;
    cin >> a >> b;

    for(int i=a; i<=b; i++){
        if(isMultipleOf3(i)||has369(i)) cnt++;
    }

    cout << cnt;
    
    return 0;
}