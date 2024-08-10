#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    int min;
    cin >> a>> b >> c;
    
    //최솟값 구하기
    min = a<b?(a<c?a:c):(b<c?b:c);

    cout << (a==min) << " " << ((a==b)&&(b==c));
    return 0;
}