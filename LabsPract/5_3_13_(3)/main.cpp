#include <iostream>
using namespace std;
class Node
{
    public:
        Node(int val);
        ~Node();    //error: definition of implicitly-declared 'Node::~Node()'
        int value;
        Node* next;
};
Node::Node(int val) : value(val), next(nullptr)
{
//    cout << "+Node" << endl;
}

Node::~Node()
{
//    cout << "-Node" << endl;
}
class List
{
    public:
        List();
        ~List();    //error: definition of implicitly-declared 'List::~List()'
        int size();
        void push_front(int value);
        bool pop_front(int &value);
    private:
        Node* head;
};
List::List() : head(nullptr)
{

}

List::~List()
{
    Node *remover, *buff;
    remover = head;
    while (remover != nullptr)
    {
        buff = remover -> next;
        delete remover;
        remover = buff;
    }
}

void List::push_front(int value)
{
        Node* new_head = new Node(value);
        new_head->next = head;
        head=new_head;
}
bool List::pop_front(int &value)
{
        if(head)
        {   value = head->value;
            Node* tmp = head;
            head = head->next;
            delete tmp;
            return true;
        }
    return false;

}

int List::size()
{
    Node *counter, *buff;
    counter = head;
    int index=0;
    while (counter != nullptr)
    {
        index++;
        buff = counter -> next;
        counter = buff;
    }
    return index;
}

int main()
{
	List list;
	for (int i = 0; i <= 5; i++)
	{
		list.push_front(i);
		cout << "pushed " << i << ", size:" << list.size() << endl;
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		int value = i;
		list.pop_front(value);
		cout << "popped " << value << ", size:" << list.size() << endl;
	}
	return 0;
}

//P.S. This task was a bit confusing since it partially relied on previous tasks that were not assigned to me.
