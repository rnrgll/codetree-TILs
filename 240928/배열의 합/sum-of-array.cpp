#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요. 
    int arr[4][4];
    int row_sum;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<4; i++){
        row_sum = 0;
        for(int j=0; j<4; j++){
            row_sum+= arr[i][j];
        }

        cout << row_sum << endl;
    }
    
    return 0;
}