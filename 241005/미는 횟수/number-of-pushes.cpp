#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    int n = -1;

    cin >> a >> b;

    for(int i=0; i<a.length()-1;i++){
        a = a[a.length()-1] + a.substr(0,a.length()-1);
        if(a==b){
            n = i+1;
            break;
        }
    }

    cout << n;
    return 0;
}