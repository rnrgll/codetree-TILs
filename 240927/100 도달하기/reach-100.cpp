#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int pp = 1;
    int p = n;
    int temp;

    cout << pp << " " << p << " ";
    while(p<100){
        temp = pp;
        pp = p;
        p += temp;

        cout<<p << " ";
    }
    return 0;
}