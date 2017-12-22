#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct Node
{
    string str;
    Node *next;
};

int main()
{
    string str;
    Node *first = new Node{str, nullptr};
    Node *last = nullptr;
    while (true)
    {
        cout<<"Введите текст: ";
        getline(cin, str);
        if (str == "end") break;
        Node *curr = new Node{str, nullptr};
        if (first -> next == nullptr) first -> next = curr;
        if (last != nullptr)
            last->next = curr;
        last = curr;
    }
    Node *curr = nullptr;
    curr = first;
    do
    {
        cout << curr -> str << endl;
        curr = curr -> next;
    }
    while (curr != nullptr);
    return 0;
}
