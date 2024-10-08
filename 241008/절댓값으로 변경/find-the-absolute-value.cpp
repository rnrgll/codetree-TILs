#include <iostream>
#include <cmath>
using namespace std;


void absArray(int (&arr)[50], int size){
    for(int i=0; i<size; i++){
        arr[i] = abs(arr[i]);
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a[50];
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    absArray(a, n);

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }


    return 0;
}