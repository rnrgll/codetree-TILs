#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    //홀수 번째 줄은 1부터 1씩 증가, 짝수번째 줄은 n부터 1씩 감소
    for(int i=1; i<=n*2; i++){
        if(i%2!=0){
            for(int j=0; j<i/2+1; j++) cout << "* ";
        }
        else {
            for(int j=0; j<n-(i/2)+1; j++) cout << "* ";
        }
        cout << endl;
    }


    return 0;
}