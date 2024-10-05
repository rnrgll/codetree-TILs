#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0;
    string input;
    string arr[200];
    

    while(true){
        cin >> input;
        if(input=="0") break;

        arr[cnt] = input;
        cnt++;
    }

    cout << cnt << endl;

    for(int i=0; i<cnt; i++){
        if(i%2==0)
            cout << arr[i] << endl;
    }
    
    return 0;
}