#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Lista
{
    template <typename X>
    struct cvor
    {

        cvor<X> *next;
        cvor<X> *previous;
        T data;
    };

    cvor<T> *head = nullptr;
    cvor<T> *tail = nullptr;

public:
    bool upis(T element)
    {

        // cvor<T> *newCvor = new cvor<T>;
        // if (newCvor == nullptr)
        //     return false;
        // newCvor->data = element;
        // if (head == nullptr)
        // {
        //     newCvor->next = head;
        //     head = newCvor;
        // }
        // else
        // {
        //     cvor<T> *curr = head;
        //     while (curr->next != nullptr)
        //     {
        //         curr = curr->next;
        //     }
        //     curr->next = newCvor;
        //     newCvor->next = nullptr;

        //     return true;
        // }
        cvor<T> *c = new (nothrow) cvor<T>{nullptr, nullptr, element};
        if (!c)
            return false;
        if (!head)
        {
            head = tail = c;
            return true;
        }
        c->previous = tail;
        tail = tail->next = c;
        return true;
    }

    void ispis()
    {
        for (cvor<T> *p = head; p;)
        {
            cout << p->data << " ";
            p = p->next;
        }
    }
};

int main()
{

    Lista<int> lista;
    lista.upis(1);
    lista.upis(2);
    lista.upis(3);
    lista.upis(4);
    lista.upis(5);
    lista.upis(6);
    lista.upis(7);
    lista.ispis();
}