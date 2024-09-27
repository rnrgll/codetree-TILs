#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int first = INT_MIN;
    int second = INT_MIN;
    int input;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> input;
        if(first<input){
            second = first;
            first = input;
        }
        else{
            if(second < input){
                second = input;
            }
        }
    }

    cout << first << " " << second;
    return 0;
}