#include <iostream>
using namespace std;

void divisionByTwo(int (&arr)[50], int size){
    for(int i=0; i<size; i++){
        if(arr[i]%2==0) arr[i]/=2;
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[50];

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    divisionByTwo(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}