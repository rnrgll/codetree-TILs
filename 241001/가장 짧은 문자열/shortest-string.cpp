#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s1, s2, s3;
    cin >> s1 >> s2>> s3;

    int length[3] = {};
    int max = -1, min = 21;

    length[0]=s1.length();
    length[1]= s2.length();
    length[2]= s3.length();

    for(int i=0; i<3; i++){
        if(max<length[i]) max = length[i];
        if(min>length[i]) min = length[i];
    }

    cout << max - min;

    return 0;
}