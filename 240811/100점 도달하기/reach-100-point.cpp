#include <iostream>
using namespace std;

char GetScore(int score);

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i =n ; i<=100; i++){
        cout << GetScore(i) << " ";
    }
    return 0;
}


//등급 반환하는 메소드
char GetScore(int score){
    if(score>=90) return 'A';
    else if(score>=80) return 'B';
    else if(score>=70) return 'C';
    else if(score>=60) return 'D';
    else return 'F';
}