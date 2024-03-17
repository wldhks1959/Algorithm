#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<string> v;

int sum_of_digits(string s)
{
    int sum = 0;
    for (char c : s) if (isdigit(c)) sum += c - '0';
    return sum;
}

bool comp(string a, string b) {
    if (a.length() != b.length()) return a.length() < b.length();
    int sum_a = sum_of_digits(a);
    int sum_b = sum_of_digits(b);
    if (sum_a != sum_b) return sum_a < sum_b;
    return a < b;
}

int main(void) {
    int n; cin >> n;
    while (n--) 
    {
        string str; cin >> str;
        v.push_back(str);
    }
    sort(v.begin(), v.end(), comp);
    for (auto& i : v) cout << i << "\n";
    return 0;
}