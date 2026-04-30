#pragma once
#include <iostream>

class Singleton {
private:
    static Singleton* instance;
    Singleton() {}

public:
    static Singleton* getInstance() {
        if (!instance)
            instance = new Singleton();
        return instance;
    }

    void showMessage() {
        std::cout << "Singleton instance\n";
    }
};

Singleton* Singleton::instance = nullptr;