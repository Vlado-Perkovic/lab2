#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Stog
{
    template <typename X>
    struct stogElement
    {
        X item;
        stogElement<X> *next;
    };

    stogElement<T> *top;

public:
    Stog() : top(nullptr) {}
    bool push(T item)
    {
        StogElement<T> *newElement = new (nothrow) StogElement<T>;
        if (newElement == nullptr)
            return false;
        newElement->item = item;
        newElement->next = top;
        top = newElement;
        return true;
    }

    bool pop(T &item)
    {
        if (top == nullptr)
            return false;
        item = top->item;
        StogElement<T> *tmp = top;
        top = top->next;
        delete tmp;
        return true;
    }
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
