#pragma once
#include <iostream>
#include <string>

class ProductB {
public:
    std::string parts;

    void show() {
        std::cout << "Product parts: " << parts << "\n";
    }
};

class Builder {
public:
    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;
    virtual ProductB* getResult() = 0;
};

class ConcreteBuilder : public Builder {
private:
    ProductB* product;

public:
    ConcreteBuilder() {
        product = new ProductB();
    }

    void buildPartA() override {
        product->parts += "PartA ";
    }

    void buildPartB() override {
        product->parts += "PartB ";
    }

    ProductB* getResult() override {
        return product;
    }
};

class Director {
public:
    void construct(Builder* builder) {
        builder->buildPartA();
        builder->buildPartB();
    }
};