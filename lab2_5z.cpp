#include <bits/stdc++.h>

using namespace std;

class Stog
{
    static const int MAX = 10;
    int stog[MAX];
    int top = -1;

public:
    bool push(int item)
    {
        if (top + 1 >= MAX)
            return false;

        stog[++top] = item;
        return true;
    }

    bool pop(int &item)
    {
        if (top < 0)
            return false;

        item = stog[top--];
        return true;
    }
};

int main()
{
    Stog stog;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        int r = rand() % 10 + 1;
        stog.push(r);
    }
    Stog tmp;
    int pom;
    while (stog.pop(pom))
    {
        cout << pom << " ";
        tmp.push(pom);
    }
    cout << endl;
    while (tmp.pop(pom))
        cout << pom << " ";

    return 0;
}