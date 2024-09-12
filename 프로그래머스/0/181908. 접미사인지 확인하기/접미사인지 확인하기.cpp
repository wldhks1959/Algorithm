#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string, string is_suffix) {
   int answer = 0;
    
   // 접미사면 answer = 1; 
   reverse(my_string.begin(), my_string.end());
   reverse(is_suffix.begin(), is_suffix.end());
   
    if(my_string.find(is_suffix)==0) answer = 1;
    
   return answer;
}