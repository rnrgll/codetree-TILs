#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int min = INT_MAX;
    int n;
    int cnt=0;

    cin >> n;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        if(min<num){
            continue;
        }
        else if(min==num){
            cnt++;
        }
        else{
            min = num;
            cnt=1;
        }
    }

    cout << min << " " << cnt;
    return 0;
}