#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

string solution(string s) 
{
    stringstream ss(s);
    string token;
    vector<int> v;
    while(ss >> token)
    {
        v.push_back(stoi(token));
    }
    sort(v.begin(), v.end());
    string ans = to_string(v[0]) + " " + to_string(v[v.size()-1]); 
    return ans;
}