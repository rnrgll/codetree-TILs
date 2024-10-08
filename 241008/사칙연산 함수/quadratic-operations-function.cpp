#include <iostream>
using namespace std;

int calc(int a, int c, int type){
    switch(type){
        case 1:
            return a+c;
        case 2:
            return a-c;
        case 3:
            return a/c;
        case 4:
            return a*c;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, c;
    char o;

    cin >> a >> o >> c;

    cout << a << " " << o << " " << c << " " << "=" << " ";
    if(o=='+'){
        cout << calc(a,c,1);
    }
    else if( o == '-'){
        cout << calc(a,c,2);
    }
    else if(o=='/'){
        cout << calc(a,c,3);
    }
    else if(o=='*'){
        cout << calc(a,c,4);
    }
    else cout << "False";
    
    
    


    return 0;
}