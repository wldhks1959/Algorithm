#include <iostream>
using namespace std;

int main(int argc,char*argv[]) {
    int a, b, v; cin >> a >> b >> v;
    int day = 1;
    day += (v - a) / (a - b); // (v-a)/(a-b)만큼 이동
    
    if ((v - a) % (a - b) != 0) day++;
    
    if (a >= v) {
        cout << "1";
    }
    else {
        cout << day;
    } 
    return 0;
}