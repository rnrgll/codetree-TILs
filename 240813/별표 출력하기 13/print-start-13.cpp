#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i=1; i<=n*2; i++){
        if(i%2!=0){
            //홀수 줄 : n부터 1까지 출력한다.
            for(int j=0; j<n-i/2; j++) cout << "* ";
            cout << endl;
        }
        else{
            //짝수 줄 : 1부터 n까지 출력
            for(int j=0; j<i/2;j++) cout << "* ";
            cout << endl;
        }
    }

    return 0;
}