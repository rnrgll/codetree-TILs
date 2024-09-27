#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int n;
    int index = 0;

    for(int i=0; i<100; i++){
        cin >> n;
        if(n==0){
            break;
        }

        arr[index] = n;
        index++;
    }

    for(int i=0; i<index; i++){
        int num = arr[i];
        if(num%2!=0){
            cout<< num+3;
        }
        else{
            cout << num/2;
        }

        cout << " ";
    }
    return 0;
}