#pragma once
#include <iostream>
#include "Object.h"

using namespace std;

class Triad : public Object
{
private:
    int first;
    int second;
    int third;

public:
    Triad(int firstValue, int secondValue, int thirdValue);
    Triad();
    Triad(const Triad& other);
    Triad& operator=(const Triad& other);
    int getFirst() const;
    int getSecond() const;
    int getThird() const;
    void setFirst(int value);
    void setSecond(int value);
    void setThird(int value);
    friend istream& operator>>(istream& is, Triad& triad);
    friend ostream& operator<<(ostream& os, const Triad& triad);
    operator string() const;
    Triad& operator++();
    Triad operator++(int);
    Triad& operator--();
    Triad operator--(int);
    friend bool operator<(const Triad& lhs, const Triad& rhs);
    friend bool operator==(const Triad& lhs, const Triad& rhs);
    friend bool operator>(const Triad& lhs, const Triad& rhs);
    friend bool operator!=(const Triad& lhs, const Triad& rhs);
    friend bool operator<=(const Triad& lhs, const Triad& rhs);
    friend bool operator>=(const Triad& lhs, const Triad& rhs);
};
