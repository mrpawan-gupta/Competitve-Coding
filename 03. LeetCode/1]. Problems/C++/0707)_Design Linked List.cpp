struct Node
{
    Node *next;
    int val;
    Node(int newVal)
    {
        next = NULL;
        val = newVal;
    }
};

class MyLinkedList
{
private:
    Node *head = NULL;
    Node *tail = NULL;
    int len = 0;

public:
    MyLinkedList() {}

    int get(int index)
    {
        if (index >= len)
        {
            return -1;
        }

        Node *walk = head;
        for (int i = 0; walk && i < index; walk = walk->next, i++)
        {
        };
        return walk->val;
    }

    void addAtHead(int val)
    {
        Node *newHead = new Node(val);
        if (head == NULL)
        {
            tail = newHead;
            head = newHead;
            increaseLen();
            return;
        }
        newHead->next = head;
        head = newHead;
        increaseLen();
    }

    void addAtTail(int val)
    {
        Node *newTail = new Node(val);
        if (tail == NULL)
        {
            tail = newTail;
            head = newTail;
            increaseLen();
            return;
        }
        tail->next = newTail;
        tail = tail->next;
        increaseLen();
    }

    void addAtIndex(int index, int val)
    {
        if (isIndexValid(index) == false)
        {
            return;
        }

        if (index == 0)
        {
            addAtHead(val);
            return;
        }

        if (index == len)
        {
            addAtTail(val);
            return;
        }

        Node *walk = head;
        for (int i = 0; i < index - 1 && walk; i++, walk = walk->next)
        {
        };
        Node *save = walk->next;
        Node *newNode = new Node(val);
        walk->next = newNode;
        newNode->next = save;
        increaseLen();
    }

    void deleteAtIndex(int index)
    {
        if (index >= len)
        {
            return;
        }

        if (index == 0)
        {
            Node *prevHead = head;
            head = head->next;
            delete (prevHead);
            decreaseLen();
            return;
        }

        Node *walk = head;
        for (int i = 0; i < index - 1 && walk; i++, walk = walk->next)
        {
        };
        Node *save = walk->next;
        walk->next = walk->next->next;
        if (index == len - 1)
        {
            tail = walk;
        }
        delete (save);
        decreaseLen();
    }

    void increaseLen()
    {
        len++;
    }

    void decreaseLen()
    {
        len--;
    }

    bool isIndexValid(int index)
    {
        return index <= len;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */