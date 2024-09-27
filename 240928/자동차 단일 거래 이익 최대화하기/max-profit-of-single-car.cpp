#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int profit = INT_MIN;
    int n;
    int price[1000];

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> price[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int temp = price[j]-price[i];
            profit = temp>profit?temp:profit;
        }
    }

    if(profit<=0) cout<<0;
    else cout << profit;
    return 0;
}