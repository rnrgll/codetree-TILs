#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, input;
    int sum = 0;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> input;
        sum += input;
    }

    string s = to_string(sum);
    s = s.substr(1) + s[0];

    cout << s;
    return 0;
}