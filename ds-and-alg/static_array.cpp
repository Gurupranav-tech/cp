#include <iostream>
#include <string.h>

template <typename T, size_t S>
class StaticArray
{
private:
    T *array;
    const size_t length = S;

public:
    StaticArray(T arr[S])
    {
        array = new T[length];
        memcpy(array, arr, sizeof(T) * length);
    }

    ~StaticArray()
    {
        delete[] array;
    }

    inline constexpr size_t size() const noexcept { return length; }

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

template <typename T, size_t S>
std::ostream &operator<<(std::ostream &stream, const StaticArray<T, S> &arr)
{
    stream << "[ ";
    for (size_t i = 0, s = arr.size(); i < s; i++)
    {
        stream << arr[i] << ", ";
    }
    stream << "]";
    return stream;
}

int main(void)
{
    constexpr size_t size = 3;
    int a[size] = {1, 2, 3};
    StaticArray<int, size> arr = a;
    std::cout << arr << std::endl;

    arr[2] = 5;
    std::cout << arr << std::endl;
}