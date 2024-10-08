#include <iostream>
using namespace std;

void calc(int a, int c, char o){
    int result = 0;
    switch(o){
        case '+':
            result = a+c;
            break;     
        case '-':
            result = a-c;
            break;
        case '/':
            result = a/c;
            break;
        case '*':
            result = a*c;
            break;
    }

    cout << a << " " << o << " " << c << " " << "=" << " " << result;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, c;
    char o;
    int result;

    cin >> a >> o >> c;

    
    if(o=='+'|| o == '-'||o=='/'||o=='*'){
        calc(a,c,o);
    }
    else cout << "False";
    
    
    


    return 0;
}