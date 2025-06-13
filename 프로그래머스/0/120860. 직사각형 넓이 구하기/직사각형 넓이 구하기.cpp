#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int width=0, height=0;
    int tmp_x=dots[0][0], tmp_y=dots[0][1]; // 임시 x, y
    
    for(int i=0; i < dots.size() ; ++i){
        if(tmp_x != dots[i][0]) width = abs(tmp_x - dots[i][0]);
        if(tmp_y != dots[i][1]) height = abs(tmp_y - dots[i][1]);
    }
    answer = width*height;
    return answer;
}