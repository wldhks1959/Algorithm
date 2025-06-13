#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    
    for(int i=0;i<arr.size();++i){
        if(flag[i]==true){ // flag가 true면
            for (int j = 0; j < arr[i] * 2; ++j) { // arr[i]*2 회만큼 arr[i]를 추가
                answer.push_back(arr[i]);
            }
        }
        else{ // flag가 false면
            for (int j = 0; j < arr[i]; ++j) { // arr[i] 회만큼 뒤에서 요소 제거
                if (!answer.empty()) { // 비어있지 않으면
                    answer.pop_back();
                }
            }
        }
    }
    
    return answer;
}