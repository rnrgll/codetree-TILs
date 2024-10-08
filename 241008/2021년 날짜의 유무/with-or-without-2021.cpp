#include <iostream>
using namespace std;



bool exists(int m, int d){
    if(m>12) return false;
    else if(m==2){
        return (d>28?false:true);
    }
    else if((m<=7 && m%2!=0)||(m>7 && m%2==0)){
        return (d>31?false:true);
    }
    else return (d>30?false:true);
    
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m, d;

    cin >> m, d;

    cout <<(exists(m,d)?"Yes":"No");

    return 0;
}