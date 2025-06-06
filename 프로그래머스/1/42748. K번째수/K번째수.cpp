#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) 
{
    vector<int> answer;
    vector<int> slice;
    for (int i = 0; i < commands.size(); i++) 
    {
		slice = array;
		sort(slice.begin()+ commands[i][0] - 1, slice.begin()+ commands[i][1]);
		answer.push_back(slice[commands[i][0] + commands[i][2] - 2]);
	}
    return answer;

}