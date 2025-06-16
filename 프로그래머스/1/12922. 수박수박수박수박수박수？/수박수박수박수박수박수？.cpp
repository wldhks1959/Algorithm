#include <string>
#include <vector>
#include <iostream>
#define MAX 10002
using namespace std;

string solution(int n) 
{
    string answer = "";
    string tmp="수박";
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
            answer += "수";
        else
            answer += "박";
    }
    return answer;
}

/*
0 1 
2 3
4 5

*/