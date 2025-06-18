#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int sortIdx = -1;

bool compare(const vector<int>& a, const vector<int>& b) 
{
    return a[sortIdx] < b[sortIdx];
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) 
{
    vector<vector<int>> answer;
    
    // 1. 기준 열을 잡아야 함. ext로
    int extIdx = -1; // 기준열 인덱스 
    string extList[4] = {"code", "date", "maximum", "remain"};
    for(int i=0;i<4;++i)
    {
        if(ext.compare(extList[i])==0)
        {
            extIdx = i;
        }
        if(sort_by.compare(extList[i])==0)
        {
            sortIdx = i;
        }
    }
    
    // 2. 기준 열을 잡으면, 그 기준열의 값인 val_ext보다 작은거만 뽑아야 한다.
    for(int i=0;i<data.size();++i)
    {
        if(data[i][extIdx] < val_ext)
        {
                answer.push_back(data[i]);
        }
    }
    
    // 3. sort_by를 기준으로 정렬하여 출력한다. 
    sort(answer.begin(), answer.end(), compare);
    return answer;
}