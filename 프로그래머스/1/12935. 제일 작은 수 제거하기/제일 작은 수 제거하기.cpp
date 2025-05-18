#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    for(int i=0;i<arr.size();i++)
    {
        answer.push_back(arr[i]);
    }
    sort(answer.begin(), answer.end(), greater<int>());
    int min = answer[answer.size()-1];
    
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] == min)
        {
            arr.erase(arr.begin()+i);
            break;
        }
    }
    if(arr.size()==0) arr.push_back(-1);
    
    return arr;
}