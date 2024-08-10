#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char flue;
    int temp;
    int a = 0;
    for(int i =0; i<3; i++){
        cin >> flue >> temp;
        if(flue == 'Y' && temp>=37) a++;
    }


    if(a>=2) cout << "E";
    else cout << "N";
    return 0;
}