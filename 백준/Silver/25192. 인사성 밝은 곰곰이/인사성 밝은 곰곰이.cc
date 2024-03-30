#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin >> n;
	int cnt = 0;
	
	set<string> user;
	string str;

	while (n--){
		cin >> str;
		if (str == "ENTER"){
			cnt += user.size();
			user.clear();
			continue;
		}
		user.insert(str);
	}
	cnt += user.size();
	cout << cnt;
	return 0;
}