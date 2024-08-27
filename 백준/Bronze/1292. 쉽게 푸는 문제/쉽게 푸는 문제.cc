#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
	int start, end, i = 0, sum = 0, count = 1;

	cin >> start >> end;

	while (++i) 
    {
		for (int j = 0; j < i; j++) 
        {
			if (count >= start) sum += i;
			if (count == end) 
            {
                cout<<sum<<"\n";
                return 0;
            }
			count++;
		}
	}
    //while
}