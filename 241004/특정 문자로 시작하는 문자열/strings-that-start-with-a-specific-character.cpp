#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int length = 0;
    int cnt = 0;
    string arr[20];
    char c;
    double avg;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> c;

    for(int i=0; i<n; i++){
        if(arr[i][0]==c){
            length += arr[i].length();
            cnt++;
        }
    }


    avg = (double)length/cnt;
    cout << fixed;
    cout.precision(2);
    cout << cnt << " " << avg;
    return 0;
}