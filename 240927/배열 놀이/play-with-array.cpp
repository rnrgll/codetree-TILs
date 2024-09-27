#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    //변수 선언
    int n, q;
    int arr[101];
    int type, num1, num2;

    //입력
    cin >> n >> q;

    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<q; i++){
        cin >> type;
        switch(type){
            case 1:
                {
                    cin >> num1;
                    cout << arr[num1];
                }
                break;
            case 2:
                {
                    cin >> num1;
                    int idx = -1;
                    for(int j=1; j<=n; j++){
                        if(arr[j]==num1){
                            idx = j;
                            break;
                        }
                    }
                    cout << (idx==-1?0:idx);
                }
                break;
            case 3:
                {
                    cin >> num1 >> num2;
                    for(int j=num1; j<=num2; j++) cout<<arr[j] << " ";
                }
                break;
        }
        cout << endl;
    }
    return 0;
}