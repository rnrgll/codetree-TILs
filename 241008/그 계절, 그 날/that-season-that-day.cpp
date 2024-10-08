#include <iostream>
#include <string>
using namespace std;

bool isYoon(int year){
    if(year%4==0){
        if(year%100==0&&year%400!=0){
            return false;
        }
        return true;
    }
    else return false;
}


int lastDate(int year, int month){
    if(month == 2){
        if(isYoon(year)) return 29;
        else return 28;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11) return 30;
    else return 31;
}

string season(int year, int month, int date){
    bool exists = (lastDate(year,month)>=date?true:false);


    if(exists){
        switch(month){
            case 3: case 4:case 5:
                return "Spring";
            case 6: case 7: case 8:
                return "Summer";
            case 9: case 10: case 11:
                return "Fall";
            case 1: case 2: case 12:
                return "Winter";
        }
    }
    else return "-1";
}


int main() {
    // 여기에 코드를 작성해주세요.
    int y, m, d;

    cin >> y >> m >> d;

    cout << season(y,m,d);


    
    return 0;
}