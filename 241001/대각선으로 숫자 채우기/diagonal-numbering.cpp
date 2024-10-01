#include <iostream>
using namespace std;

int main() {
    //다른 풀이로 접근
    int n, m, cnt= 1;
    int arr[100][100]={};

    //입력
    cin >> n >> m;


    //연산
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]!=0) continue;

            //비어있다면 해당 지점을 시작점으로 대각선으로 이동시킨다.
            int start_row = i, start_col = j;
            while(start_row<n && start_col>=0){
                arr[start_row++][start_col--] = cnt++;
            }
        }
    }



    //출력
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j] << " ";
        }
        cout<< endl;
    }
    return 0;
}