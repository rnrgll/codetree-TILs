#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char c = 'A';

    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<=j){
                cout << c << " ";
                c++;
                if(c>'Z') c= 'A';
            }
            else cout << " " << " ";
        }
        cout << endl;
    }
    return 0;
}