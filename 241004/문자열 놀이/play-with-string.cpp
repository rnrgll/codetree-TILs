#include <string>
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    int q;

    int type;
    int idx1, idx2;
    char c1, c2, temp;

    //입력
    cin >> s >> q;

    for(int i=0; i<q; i++){
        cin >> type;
        if(type==1){
            cin >> idx1 >> idx2;
            idx1--; idx2--; //index 범위 수정
            temp = s[idx1];
            s[idx1] = s[idx2];
            s[idx2] = temp;
            cout << s << endl;
        }
        else{
            cin >> c1 >> c2;
            for(int j=0; j<s.length(); j++){
                if(s[j]==c1) s[j] = c2;
            }
            cout << s << endl;
        }
    }


    return 0;
}