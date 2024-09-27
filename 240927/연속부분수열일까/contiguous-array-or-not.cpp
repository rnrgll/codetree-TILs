#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    int a1[100];
    int a2[100];
    bool isTrue = false;
    //입력
    cin >> n1 >> n2;
    for(int i=0; i<n1; i++){
        cin >> a1[i];
    }

    for(int i=0; i<n2; i++){
        cin >> a2[i];
    }


    //연산
    for(int i=0; i<n1-n2+1; i++){
        for(int j=0; j<n2; j++){
            if(a1[i+j]!=a2[j]){
                break;
            }
            if(j==n2-1) isTrue = true;
        }
    }


    //출력
    cout<<(isTrue?"Yes":"No");
    
    return 0;
}