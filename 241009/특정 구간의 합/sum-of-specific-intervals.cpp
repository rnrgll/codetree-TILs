#include <iostream>
#define MAX_SIZE 100
using namespace std;

int arr[MAX_SIZE+1];

void arraySum(int a, int b){
    int sum = 0;
    for(int i=a; i<=b; i++){
        sum += arr[i];
    }

    cout << sum << endl;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, a1, a2;

    //입력
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    
    for(int i=0; i<m; i++){
        cin >> a1 >> a2;
        arraySum(a1, a2);
    }
    return 0;
}