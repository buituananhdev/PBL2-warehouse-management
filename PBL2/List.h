#pragma once
#include <iostream>
#include <assert.h>
using namespace std;
template<typename T> class List;
template<typename T>
class List
{
    int length;
    T* data;
public:
    List();
    List(int);
    ~List();
    void Erase();
    T& operator[](int);
    int GetLength() const;
    void Reallocate(int);
    void Resize(int);
    void Insert(T, int);
    void Remove(int);
    void InsertFirst(T);
    void InsertLast(T);
};

template<typename T>
List<T>::List() : length(0), data(nullptr) {}
template<typename T>
List<T>::List(int length) : length(length)
{
    if (length > 0)
        this->data = new T[this->length];
    else
        this->data = nullptr;
}
template<typename T>
List<T>::~List()
{
    delete[] this->data;
}
template<typename T>
void List<T>::Erase()
{
    delete[] this->data;
    this->data = nullptr;
    this->length = 0;
}
template<typename T>
T& List<T>::operator[](int index)
{
    return this->data[index];
}
template<typename T>
int List<T>::GetLength() const
{
    return this->length;
}

template<typename T>
void List<T>::Reallocate(int newLength)
{
    Erase();
    if (newLength <= 0)
        return;
    this->data = new T[newLength];
    this->length = newLength;
}
template<typename T>
void List<T>::Resize(int newLength)
{
    if (newLength == this->length)
        return;
    if (newLength <= 0)
    {
        Erase();
        return;
    }
    T* data = new T[newLength];
    if (this->length > 0)
    {
        int maxlength = (newLength > this->length) ? this->length : newLength;
        for (int i = 0; i < maxlength; ++i)
            data[i] = (*this)[i];
    }
    delete[] this->data;
    this->data = data;
    this->length = newLength;
}
template<typename T>
void List<T>::Insert(T value, int index)
{
    T* data = new T[this->length + 1];
    for (int i = 0; i < index; ++i)
    {
        data[i] = (*this)[i];
    }
    data[index] = value;
    for (int i = index; i < this->length; ++i)
        data[i + 1] = (*this)[i];
    delete[] this->data;
    this->data = data;
    ++this->length;
}
template<typename T>
void List<T>::InsertFirst(T value)
{
    this->Insert(value, 0);
}
template<typename T>
void List<T>::InsertLast(T value)
{
    this->Insert(value, this->length);
}
template<typename T>
void List<T>::Remove(int index)
{
    assert(index >= 0 && index <= this->length);
    if (this->length == 1)
    {
        Erase();
        return;
    }
    T* data = new T[this->length - 1];
    for (int i = 0; i < index; ++i)
    {
        data[i] = (*this)[i];
    }
    for (int i = index + 1; i < this->length; ++i)
    {
        data[i - 1] = (*this)[i];
    }
    delete[] this->data;
    this->data = data;
    --this->length;
}