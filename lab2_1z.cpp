#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Lista
{
    template <typename X>
    struct cvor
    {
        T data;
        cvor<X> *next;
    };

    cvor<T> *head = nullptr;

public:
    bool upis(T element)
    {

        cvor<T> *newCvor = new cvor<T>;
        if (newCvor == nullptr)
            return false;
        newCvor->data = element;
        if (head == nullptr || newCvor->data > head->data)
        {
            newCvor->next = head;
            head = newCvor;
        }
        else
        {
            // cvor<T> *prev = nullptr;
            // cvor<T> *curr = head;
            // while (curr != nullptr && newCvor->data < curr->data)
            // {
            //     prev = curr;
            //     curr = curr->next;
            // }
            // newCvor->next = curr;
            // prev->next = newCvor;
            cvor<T> **p;
            for (p = &head; *p && (*p)->data < element; p = &((*p)->next))
                ;
            newCvor->next = *p;
            *p = newCvor;
            return true;
        }
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