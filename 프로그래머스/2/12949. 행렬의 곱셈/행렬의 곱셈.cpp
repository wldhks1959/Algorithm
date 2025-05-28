#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) 
{
    int len1 = arr1.size();
    
    int lenIn1 = arr1[0].size();
    int lenIn2 = arr2[0].size();
    
    vector<vector<int>> answer(len1 ,vector<int> (lenIn2, 0));
    
    for(int i=0;i<len1;i++)
    {
        for(int j=0;j<lenIn2;j++)
        {
            for(int k=0;k<lenIn1;k++)
            {
                answer[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    
    return answer;
}