#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr1[10][10], arr2[10][10], newArr[10][10];
    int n, m;


    //입력
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr1[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr2[i][j];
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr1[i][j]==arr2[i][j]){
                newArr[i][j] = 0;
            }
            else newArr[i][j] = 1;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << newArr[i][j] << " ";
        }
        cout << endl;
    }

    

    return 0;
}