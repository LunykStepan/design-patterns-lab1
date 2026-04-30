#pragma once
#include <iostream>

class Prototype {
public:
    virtual Prototype* clone() = 0;
    virtual void show() = 0;
};

class ConcretePrototype : public Prototype {
public:
    Prototype* clone() override {
        return new ConcretePrototype(*this);
    }

    void show() override {
        std::cout << "Prototype cloned\n";
    }
};