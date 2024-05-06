// 1120
#include<iostream>
#include<string>
using namespace std;

int main(){
    int cnt;
    int min = 99;
    string a,b;

    cin >> a >> b;

    for(int len=0; len<=b.length() - a.length(); len++)
    {
        cnt = 0;
        for(int i = 0; i < a.length(); i++) 
            if(a[i] != b[i+len]) cnt++;
        
        min = min>=cnt ? cnt:min;
    }
    cout<<min<<"\n";
    return 0;
}