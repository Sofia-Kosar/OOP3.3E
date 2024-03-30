#pragma once

class Object {
public:
    Object();
    ~Object();

    static int count();

private:
    static int objCount;
};