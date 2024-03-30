#include <iostream>
#include "Date.h"
#include "Object.h"
#include "Triad.h"
#include <Windows.h> 

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Enter values for Date 1:" << endl;
    Date date1;
    cin >> date1;

    
    cout << "Enter values for Date 2:" << endl;
    Date date2;
    cin >> date2;

    
    cout << "Date 1: " << date1 << endl;
    cout << "Date 2: " << date2 << endl;

    
    cout << "Date 1 < Date 2: " << (date1 < date2) << endl;
    cout << "Date 1 > Date 2: " << (date1 > date2) << endl;
    cout << "Date 1 == Date 2: " << (date1 == date2) << endl;
    cout << "Date 1 != Date 2: " << (date1 != date2) << endl;
    cout << "Date 1 <= Date 2: " << (date1 <= date2) << endl;
    cout << "Date 1 >= Date 2: " << (date1 >= date2) << endl;

    cout << "Кількість об'єктів класу Date: " << Date::count() << endl;

    return 0;
}
