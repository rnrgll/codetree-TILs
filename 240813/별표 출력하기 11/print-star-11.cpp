#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    //0부터 짝수번째 줄은 2n+1개씩 찍기
    //홀수번째 줄은 0부터 짝수번째 열만 별표 찍기

    for(int i=0; i<2*n+1; i++){
        if(i%2==0) {
            for(int j=0; j<2*n+1; j++) cout << "* ";
        }
        else {
            for(int j=0; j<2*n+1; j++){
                if(j%2==0) cout << "* ";
                else cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}