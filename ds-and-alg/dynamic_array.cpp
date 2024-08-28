#include <iostream>
#include <string.h>

template <typename T>
class DynamicArray
{
private:
    size_t length;
    size_t size;
    T *array;

public:
    DynamicArray(size_t size)
        : length(size), size(size)
    {
        array = new T[length];
        memset(array, 0, sizeof(T) * size);
    }

    ~DynamicArray()
    {
        delete[] array;
    }

    T pop()
    {
        if (length == 0)
            throw std::runtime_error("Nothing left to pop");
        T elem = array[--length];
        return elem;
    }

    void extend(const DynamicArray<T> &arr)
    {
        for (int i = 0; i < arr.get_size(); i++)
        {
            push_back(arr[i]);
        }
    }

    void push_back(T elem)
    {
        if (length >= size)
        {
            size *= 2;
            T *narr = new T[size];
            memset(narr, 0, sizeof(T) * size);
            memcpy(narr, array, sizeof(T) * length);
            delete[] array;
            narr[length++] = elem;
            array = narr;
        }
        else
        {
            array[length++] = elem;
        }
    }

    inline const size_t get_size() const { return length; }

    T &operator[](size_t s)
    {
        if (s >= length)
            throw std::runtime_error("Out of bound access");
        return array[s];
    }

    T operator[](size_t s) const
    {
        if (s >= length)
            throw std::runtime_error("Out of bound access");
        return array[s];
    }
};

template <typename T>
std::ostream &operator<<(std::ostream &stream, const DynamicArray<T> &arr)
{
    stream << "[ ";
    for (int i = 0; i < arr.get_size(); i++)
    {
        stream << arr[i] << ", ";
    }
    stream << "]";
    return stream;
}

int main()
{
    DynamicArray<int> arr(5);
    for (int i = 0; i <= 3; i++)
        arr[i] = i;
    std::cout << arr << std::endl;
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(10);
    std::cout << arr << std::endl;

    std::cout << arr.pop() << std::endl;
    std::cout << arr.pop() << std::endl;
    std::cout << arr.pop() << std::endl;
    std::cout << arr.pop() << std::endl;
    std::cout << arr.pop() << std::endl;
    std::cout << arr.pop() << std::endl;
    std::cout << arr.pop() << std::endl;
    std::cout << arr.pop() << std::endl;
    std::cout << arr << std::endl;

    DynamicArray<int> ar1r(2);
    ar1r[0] = 1;
    ar1r[0] = 1;
    arr.extend(ar1r);
    std::cout << arr << std::endl;
}