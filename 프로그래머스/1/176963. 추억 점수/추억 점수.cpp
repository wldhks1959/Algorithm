#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) 
{
    vector<int> answer;
    
    for(int ph=0; ph < photo.size();ph++)
    {
        int tmp = 0;
        for(int human=0; human < photo[ph].size(); human++)
        {
            for(int iter=0; iter<name.size();iter++)
            {
                if(photo[ph][human].compare(name[iter]) == 0)
                {
                    tmp+= yearning[iter];
                }
            }
        }
        answer.push_back(tmp);
    }
    
    return answer;
}