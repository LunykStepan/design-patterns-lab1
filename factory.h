#pragma once
#include <iostream>

class Animal {
public:
    virtual void speak() = 0;
};

class Dog : public Animal {
public:
    void speak() override {
        std::cout << "Woof\n";
    }
};

class Cat : public Animal {
public:
    void speak() override {
        std::cout << "Meow\n";
    }
};

class AnimalFactory {
public:
    static Animal* createAnimal(int type) {
        if (type == 1) return new Dog();
        if (type == 2) return new Cat();
        return nullptr;
    }
};