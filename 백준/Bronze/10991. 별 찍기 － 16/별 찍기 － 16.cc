#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int num;
    cin>>num;
    
    for(int i=0;i<num;i++)
    {
        for(int j=num-1-i;j!=0;j--)
            cout<<" ";
        for(int k=0; k<i+1; k++)
            cout<<"* ";
        cout<<"\n";
    }
    return 0;
}