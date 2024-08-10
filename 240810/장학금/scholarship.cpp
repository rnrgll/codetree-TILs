#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int mid, fin, money = 0;
    cin >> mid >> fin;

    if(mid>=90){
        if(fin >=95) money = 100000;
        else if(fin>=90) money = 50000;;
    }


    cout << money;
    return 0;
}