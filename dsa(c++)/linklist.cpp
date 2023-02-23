
#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertATtail(node *&head, int val)
{

    node *n = new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
    void display(node * head)
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    int main()
    {
        node *head = NULL;
        insertATtail(head ,1);
        insertATtail(head ,2);
        insertATtail(head ,3);
        display(head);

        return 0;
    }