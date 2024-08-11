#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool isComposite = false;
    cin >> n;
    for(int i=2; i<n;i++){
        if(n%i==0){
            isComposite = true;
            break;
        }
    }

    cout << (isComposite?'C':'N');
    
    return 0;
}