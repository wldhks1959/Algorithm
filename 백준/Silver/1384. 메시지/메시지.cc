#include <iostream>
using namespace std;

struct data {
    char name[100];
    char message[100];
}student[60];


int main()
{
    int num = 1;
    while (1) {
        int n;
        cin >> n;
        if (n == 0) break;
        for (int i = 0; i < n; i++)
        {
            cin >> student[i].name;
            for (int j = 0; j < n - 1; j++) cin >> student[i].message[j];
        }

        cout << "Group " << num++ << "\n";
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (student[i].message[j] == 'N')
                {
                    int index = n + i - 1 - j;
                    index = index % n;
                    cout << student[index].name << " was nasty about " << student[i].name << "\n";
                    flag = true;
                }
            }
        }
        if (flag == false)
        {
            cout << "Nobody was nasty" << "\n";
        }
        cout << "\n";
    }
    return 0;
}