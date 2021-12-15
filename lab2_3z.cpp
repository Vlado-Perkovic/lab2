#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Stog
{
private:
    static const int MAX = 100;
    T stog[MAX];
    int top = -1;

public:
    Stog() {}
    bool push(T item)
    {
        if (top + 1 >= MAX)
            return false;
        stog[++top] = item;
        return true;
    }
    ~Stog() { cout << "ajbok"; };
};

int main()
{
    Stog<int> stog;
    srand(time(NULL));
    for (int i = 0; i < 101; i++)
    {
        int r = rand() % INT16_MAX;
        cout << stog.push(r) << " ";
    }
    return 0;
}