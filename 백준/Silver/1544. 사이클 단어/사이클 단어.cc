#include <iostream>
#include <vector>
using namespace std;
 
int main() 
{
    int n; 
    string word;
    vector<string> v;    
    
    cin >> n;
    
    for (int a = 0; a < n; a++) 
    {
        cin >> word;
 
        if (v.empty()) v.push_back(word);
 
        bool same = false;
        for (int i = 0; i < v.size(); i++) 
        {
            for (int j = 0; j < v[i].size(); j++) 
            {
                if (word == v[i]) 
                {
                    same = true;
                    break;
                }
                
                else 
                {
                    v[i] = v[i] + v[i].at(0);
                    v[i].erase(v[i].begin());
                }
            }
        }
        // 다르다면 벡터에 추가
        if (same == false) 
            v.push_back(word);
    }
    cout << v.size();
    return 0;
}