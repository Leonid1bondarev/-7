#pragma once
#include <iostream>
using namespace std;
class IntArray
{
protected:
    int m_length{};
    int* m_data{};

public:
    IntArray();

    IntArray(int length);

    IntArray(const IntArray& a);

    ~IntArray();

    void erase();

    int& operator[](int index);

    void reallocate(int newLength);

    void resize(int newLength);

    IntArray& operator=(const IntArray& a);

    void insertBefore(int value, int index);

    void remove(int index);

    void insertAtBeginning(int value);

    void insertAtEnd(int value);

    int getLength() const;
};