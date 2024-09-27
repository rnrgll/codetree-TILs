#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a1, a2;
    int temp;
    cin >> a1 >> a2;

    for(int i=0; i<10; i++){
        if(i==0){
            cout << a1;
        }
        else if(i==1){
            cout << a2;
        }
        else {
            temp = a1;
            a1 = a2;
            a2 += 2*temp;

            cout << a2;
        }
        cout << " ";
    }
    return 0;
}