#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// struct 
struct human 
{
  string name;
  int dd;
  int mm;
  int yyyy;
};

// compare
bool compare(const human& h1, const human& h2)
{
    if(h1.yyyy != h2.yyyy)
        return h1.yyyy<h2.yyyy;
    
    if(h1.mm!=h2.mm)
        return h1.mm<h2.mm;
        
    return h1.dd < h2.dd;
}

int main(void)
{
    // var
    int n; cin>>n;
    vector<human> person(n);
    
    // input
    for(int i=0;i<n;i++)
    {
        cin>>person[i].name>>person[i].dd>>person[i].mm>>person[i].yyyy;
    }
    
    // sort 
    sort(person.begin(), person.end(), compare);
    
    // result
    cout << person[n-1].name<<"\n";
    cout << person[0].name<<"\n";
    
    return 0;
}