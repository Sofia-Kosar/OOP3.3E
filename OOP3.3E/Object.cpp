#include "Object.h"
int Object::objCount = 0;

Object::Object() {
    objCount++;
}

Object::~Object() {
    objCount--;
}

int Object::count() {
    return objCount;
}