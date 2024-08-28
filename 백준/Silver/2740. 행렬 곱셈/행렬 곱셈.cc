#include <iostream>
using namespace std;
#define MAX 101
int main()
{
	int a[MAX][MAX]={0,};
	int b[MAX][MAX]={0,};
	int result[MAX][MAX]={0,};
	int n, m, k; 
    
    cin>>n>>m;
	for(int i=0;i<n;i++)
    {
		for(int j=0;j<m;j++)
        {
			cin>>a[i][j];
		}
	}
    
	cin>>m>>k;
	for(int i=0;i<m;i++)
    {
		for(int j=0;j<k;j++)
        {
			cin>>b[i][j];
		}
	}		
	
    for(int i=0;i<n;i++)
    {
		for(int j=0;j<k;j++)
        {
			for(int v=0;v<m;v++)
            {
				result[i][j]+=a[i][v]*b[v][j];	
			}
			cout<<result[i][j]<<" ";		
		}
		cout<<"\n";
	}
	return 0;
}