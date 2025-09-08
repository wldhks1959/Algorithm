#include <iostream>
using namespace std;

int main()
{
    int num[9];
    int sum=0;
    int a, b;
    
    for(size_t i=0;i<9;i++)
    {
        cin>>num[i];
        sum+=num[i];
    }
    
    for(size_t i=0;i<9;i++)
    {
        for(size_t j=i+1;j<9;j++)
        {
            if(sum-(num[i]+num[j])==100)
            {
                a=i;
                b=j;
            }
        }
    }
    
    for(size_t i=0;i<9;i++)
    {
        if(i==a||i==b)
        {
            continue;
        }
        else
        {
            cout<<num[i]<<"\n";
        }
    }

    return 0;
}