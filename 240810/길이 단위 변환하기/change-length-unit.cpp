#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float ft = 30.48;
    float mi = 160934;
    cout << fixed;
    cout.precision(1);

    cout << "9.2ft = "<< ft*9.2 <<"cm"<<endl;
    cout << "1.3mi = "<< mi*1.3<<"cm";
    return 0;
}