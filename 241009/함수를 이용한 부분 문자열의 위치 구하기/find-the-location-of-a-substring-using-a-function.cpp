#include <iostream>
#include <string>
using namespace std;

//다시 풀기
string text, pattern;

bool IsSame(int start_idx){
    int m = (int)pattern.size();
    for(int j=0; j<m; j++){
        if(text[start_idx+j]!=pattern[j]) return false;
    }

    return true;
}

int findSubString(){
    int n = (int)text.size();
    int m = (int)pattern.size();
    for(int i=0; i<=n-m; i++){
        if(IsSame(i)){
            return i;
        }
    }

    return -1;
}


int main() {
    // 여기에 코드를 작성해주세요.
    cin >> text >> pattern;

    cout << findSubString();
    return 0;
}