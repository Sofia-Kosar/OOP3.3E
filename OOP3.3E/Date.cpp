#include "Date.h"
#include <iostream>

Date::Date(const Triad& tValue) : t(tValue) {}
Date::Date() : t() {}
Date::Date(const Date& other) : t(other.t) {}

Date& Date::operator=(const Date& other) {
    if (this != &other) {
        t = other.t;
    }
    return *this;
}

Triad Date::getTriad() const {
    return t;
}

void Date::setTriad(const Triad& tValue) {
    t = tValue;
}
Date::operator string() const {
    return static_cast<std::string>(t);
}

std::istream& operator>>(std::istream& is, Date& date) {
    Triad tValue;
    is >> tValue;
    date.setTriad(tValue);
    return is;
}


std::ostream& operator<<(std::ostream& os, const Date& date) {
    os << date.getTriad();
    return os;
}


bool operator<(const Date& lhs, const Date& rhs) {
    return lhs.t < rhs.t;
}

bool operator==(const Date& lhs, const Date& rhs) {
    return lhs.t == rhs.t;
}

bool operator!=(const Date& lhs, const Date& rhs) {
    return !(lhs == rhs);
}

bool operator>(const Date& lhs, const Date& rhs) {
    return rhs < lhs;
}

bool operator<=(const Date& lhs, const Date& rhs) {
    return !(lhs > rhs);
}

bool operator>=(const Date& lhs, const Date& rhs) {
    return !(lhs < rhs);
}
