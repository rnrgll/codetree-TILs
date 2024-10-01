#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, cnt= 1;
    int arr[100][100]={};

    cin >> n >> m;
    for(int i=0; i<m; i++){
        int start_column = i;
        for(int j=0; j<n; j++){
            if(start_column<0){
                break;
            }
            arr[j][start_column--] = cnt++;
        }
    }

    for(int i=1; i<n; i++){
        int start_row = i;
        for(int j=m-1; j>=0; j--){
            if(start_row>=n){
                break;
            }
            arr[start_row++][j] = cnt++;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j] << " ";
        }
        cout<< endl;
    }
    return 0;
}