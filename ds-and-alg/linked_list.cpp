#include <iostream>

template <typename T>
struct Node
{
    T elem;
    Node *next;
};

template <typename T>
class LinkedList
{
private:
    size_t length = 0;
    Node<T> *head;

public:
    LinkedList(T h)
    {
        head = new Node<T>();
        head->elem = h;
        head->next = nullptr;
        length++;
    }

    ~LinkedList()
    {
        Node<int> *h = head;
        while (h != nullptr)
        {
            auto s = h->next;
            delete h;
            h = s;
        }
    }

    void append(T elem)
    {
        Node<T> *h = head;
        while (h->next != nullptr)
        {
            h = h->next;
        }

        h->next = new Node<int>();
        h->next->elem = elem;
        length++;
    }

    LinkedList<T> reverse() const
    {
        LinkedList<T> reversed_list((*this)[length - 1].elem);
        for (int i = length - 2; i >= 0; i--)
        {
            reversed_list.append((*this)[i].elem);
        }
        return reversed_list;
    }

    inline size_t size() const { return length; }

    Node<T> &operator[](size_t s)
    {
        if (s >= length)
            throw std::runtime_error("Out of bound access");
        Node<T> *a = head;
        for (int i = 0; i < s; i++)
        {
            if (a == nullptr)
                throw std::runtime_error("Invalid access");

            a = a->next;
        }
        return *a;
    }

    Node<T> operator[](size_t s) const
    {
        if (s >= length)
            throw std::runtime_error("Out of bound access");
        Node<T> *a = head;
        for (int i = 0; i < s; i++)
        {
            if (a == nullptr)
                throw std::runtime_error("Invalid access");

            a = a->next;
        }
        return *a;
    }
};

template <typename T>
std::ostream &operator<<(std::ostream &stream, const Node<T> node)
{
    stream << node.elem;
    return stream;
}

template <typename T>
std::ostream &operator<<(std::ostream &stream, const LinkedList<T> &list)
{
    stream << "[";
    for (size_t i = 0; i < list.size(); i++)
    {
        stream << list[i] << ", ";
    }
    stream << "]";
    return stream;
}

int main(void)
{
    LinkedList<int> list(1);
    for (int i = 2; i <= 10; i++)
        list.append(i);
    std::cout << list << "\n";
    list[3].elem = 55;
    std::cout << list << "\n";
    auto reversed_list = list.reverse();
    std::cout << reversed_list << std::endl;
}