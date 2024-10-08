#include <iostream>
using namespace std;

int n, m;
int sum;
int a[100];

void myFunc(){
    while(true){
        // cout << "a[" << m << "] = " << a[m] << endl; 
        sum += a[m];
        if(m==1) break;
        if(m%2==0)  m/=2;
        else m-=1;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    myFunc();
    cout << sum;
    return 0;
}