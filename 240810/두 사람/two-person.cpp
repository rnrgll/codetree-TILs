#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int aage, bage;
    char asex, bsex;
    cin >> aage >> asex >> bage >> bsex;

    if(aage>=19&&asex=='M'||bage>=19&&bsex=='M') cout <<1;
    else cout<<0;
    return 0;
}