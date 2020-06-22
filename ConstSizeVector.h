//
// Created by Julian on 20.06.2020.
//

#ifndef AUFGABE6_3_CONSTSIZEVECTOR_H
#define AUFGABE6_3_CONSTSIZEVECTOR_H


template <typename T, size_t s> class ConstSizeVector
{
public:
    ConstSizeVector();

    constexpr size_t size();
    T& operator[] (size_t i);
    template< size_t i>
    constexpr T& get();

private:
    T  _array[s];
};


template <typename T, size_t s> ConstSizeVector<T, s>::ConstSizeVector()
{
    for (size_t i = 0; i < s; i++)
    {
        _array[i] = T();
    }
}


template <typename T, size_t s> constexpr size_t ConstSizeVector<T, s>::size()
{
    return s;
}

template <typename T, size_t s> T& ConstSizeVector<T, s>::operator[](size_t i)
{
    return _array[i];
}










template <typename T, size_t s1, size_t s2> ConstSizeVector<T, s1 + s2> concat(ConstSizeVector<T, s1> first,
                                                                               ConstSizeVector<T, s2> second)
{
    ConstSizeVector<T, s1 + s2> A;

    size_t i;
    for (i = 0; i < s1; i++)
    {
        A[i] = first[i];
    }

    for (size_t j = 0; j < s2; j++)
    {
        A[i+j] = second[j];
    }

    return A;
}

#endif //AUFGABE6_3_CONSTSIZEVECTOR_H
