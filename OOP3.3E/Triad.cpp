#include "Triad.h"
#include <sstream>
#include <iostream>
#include <cstring>

Triad::Triad(int firstValue, int secondValue, int thirdValue) : first(firstValue), second(secondValue), third(thirdValue) {}

Triad::Triad() : first(0), second(0), third(0) {}

Triad::Triad(const Triad& other) : first(other.first), second(other.second), third(other.third) {}

Triad& Triad::operator=(const Triad& other) {
    if (this != &other) {
        first = other.first;
        second = other.second;
        third = other.third;
    }
    return *this;
}

int Triad::getFirst() const {
    return first;
}

int Triad::getSecond() const {
    return second;
}

int Triad::getThird() const {
    return third;
}

void Triad::setFirst(int value) {
    first = value;
}

void Triad::setSecond(int value) {
    second = value;
}

void Triad::setThird(int value) {
    third = value;
}

istream& operator>>(istream& is, Triad& triad) {
    cout << "Enter triad" << endl;
    cout << "First: "; is >> triad.first;
    cout << "Second: "; is >> triad.second;
    cout << "Third: "; is >> triad.third;
    return is;
}

ostream& operator<<(ostream& os, const Triad& triad) {
    os << triad.first << "." << triad.second << "." << triad.third;
    return os;
}

Triad::operator string() const {
    stringstream sout;
    sout << first << "." << second << "." << third;
    return sout.str();
}

Triad& Triad::operator++() {
    ++first;
    ++second;
    ++third;
    return *this;
}

Triad Triad::operator++(int) {
    Triad temp(*this);
    ++(*this);
    return temp;
}

Triad& Triad::operator--() {
    --first;
    --second;
    --third;
    return *this;
}

Triad Triad::operator--(int) {
    Triad temp(*this);
    --(*this);
    return temp;
}
bool operator<(const Triad& lhs, const Triad& rhs) {
    if (lhs.first != rhs.first) return lhs.first < rhs.first;
    if (lhs.second != rhs.second) return lhs.second < rhs.second;
    return lhs.third < rhs.third;
}

bool operator==(const Triad& lhs, const Triad& rhs) {
    return lhs.first == rhs.first && lhs.second == rhs.second && lhs.third == rhs.third;
}

bool operator!=(const Triad& lhs, const Triad& rhs) {
    return !(lhs == rhs);
}

bool operator>(const Triad& lhs, const Triad& rhs) {
    return rhs < lhs;
}

bool operator<=(const Triad& lhs, const Triad& rhs) {
    return !(lhs > rhs);
}

bool operator>=(const Triad& lhs, const Triad& rhs) {
    return !(lhs < rhs);
}
