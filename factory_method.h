#pragma once
#include <iostream>

class ProductFM {
public:
    virtual void use() = 0;
};

class ConcreteProductFM : public ProductFM {
public:
    void use() override {
        std::cout << "ConcreteProduct used\n";
    }
};

class Creator {
public:
    virtual ProductFM* createProduct() = 0;
};

class ConcreteCreator : public Creator {
public:
    ProductFM* createProduct() override {
        return new ConcreteProductFM();
    }
};