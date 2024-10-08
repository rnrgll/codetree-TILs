#include <iostream>
using namespace std;

bool isSubSeqArr(int* a, int aSize, int* b, int bSize){
    bool result;
    for(int i=0; i<aSize-bSize; i++){
        for(int j=0; j<bSize; j++){
            if(a[i+j]==b[j]) 
                result = true;
            else{
                result = false;
                break;
            }
        }
        if(result) return result;
    }
    return result;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int a[100], b[100];
    int n1, n2;
    bool result;

    cin >> n1 >> n2;

    for(int i=0; i<n1; i++){
        cin >> a[i];
    }
    for(int i=0; i<n2; i++){
        cin >> b[i];
    }

    result = isSubSeqArr(a, n1, b, n2);
    cout << (result?"Yes":"No");

    
    return 0;
}