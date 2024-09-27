#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[4]={};
    char symptom;
    int temp;

    for(int i=0; i<3; i++){
        cin >> symptom >> temp;
        if(symptom=='Y'){
            if(temp>=37) arr[0]++;
            else arr[2]++;
        }
        else{
            if(temp>=37) arr[1]++;
            else arr[3]++;
        }
    }


    for(int i=0; i<4; i++){
        cout << arr[i] << " ";
    }
    if(arr[0]>=2) cout << "E";
    return 0;
}