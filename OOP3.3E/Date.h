#pragma once
#include "Triad.h"

class Date : public Triad
{
private:
    Triad t;
   public:
    Date(const Triad& tValue);
    Date();
    Date(const Date& other);
    Date& operator=(const Date& other);
    Triad getTriad() const;
    void setTriad(const Triad& tValue);
    operator string() const;
    friend std::istream& operator>>(std::istream& is, Date& date);
    friend std::ostream& operator<<(std::ostream& os, const Date& date);
    friend bool operator<(const Date& lhs, const Date& rhs);
    friend bool operator==(const Date& lhs, const Date& rhs);
    friend bool operator>(const Date& lhs, const Date& rhs);
    friend bool operator!=(const Date& lhs, const Date& rhs);
    friend bool operator<=(const Date& lhs, const Date& rhs);
    friend bool operator>=(const Date& lhs, const Date& rhs);
};
