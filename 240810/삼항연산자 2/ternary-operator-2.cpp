#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    cout << (a==1?"t":"f"); //shift 연산자의 우선순위가 더 높기 때문에 괄호를 사용해 삼항 연산자가 먼저 처리될 수 있도록 한다!
    return 0;
}