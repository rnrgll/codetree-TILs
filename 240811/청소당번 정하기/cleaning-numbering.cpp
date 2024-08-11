#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int classroom = 0, corridor = 0, bathroom = 0;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(i%12==0) {
            bathroom++;
        }
        else if(i%6==0||i%3==0){
            corridor++;
        }
        else if(i%2==0){
            classroom++;
        }
    }

    cout << classroom << " " << corridor << " " << bathroom;
    return 0;
}