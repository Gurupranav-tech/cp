#include <iostream>
#include <string.h>

template <typename T>
class Stack
{
private:
    size_t length;
    size_t alloc_length;
    T *arr;

public:
    Stack()
        : length(0), alloc_length(10)
    {
        arr = new T[alloc_length];
        memset(arr, 0, alloc_length * sizeof(T));
    }

    void insert(T el)
    {
        if (length >= alloc_length)
        {
            alloc_length *= 2;
            T *narr = new T[alloc_length];
            memset(narr, 0, alloc_length * sizeof(T));
            memcpy(narr, arr, sizeof(T) * length);
            delete[] arr;
            narr = arr;
        }
        arr[length++] = el;
    }

    T pop()
    {
        if (length == 0)
            throw std::runtime_error("Cannot pop from empty stack");
        T el = arr[length - 1];
        length--;
        return el;
    }

    ~Stack()
    {
        delete[] arr;
    }

    inline size_t size() const noexcept { return length; }
};

int main()
{
    Stack<int> stack;
    for (int i = 0; i < 10; i++)
        stack.insert(i);
    for (int i = 0; i < 10; i++)
        std::cout << stack.pop() << std::endl;
}