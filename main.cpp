#include <iostream>

#include "singleton.h"
#include "factory.h"
#include "factory_method.h"
#include "abstract_factory.h"
#include "builder.h"
#include "prototype.h"

int main() {

    std::cout << "=== Singleton ===\n";
    Singleton::getInstance()->showMessage();

    std::cout << "\n=== Factory Method ===\n";
    Creator* creator = new ConcreteCreator();
    ProductFM* productFM = creator->createProduct();
    productFM->use();

    std::cout << "\n=== Abstract Factory ===\n";
    GUIFactory* factory = new WindowsFactory();
    Button* button = factory->createButton();
    button->paint();

    std::cout << "\n=== Builder ===\n";
    Director director;
    ConcreteBuilder builder;
    director.construct(&builder);
    ProductB* productB = builder.getResult();
    productB->show();

    std::cout << "\n=== Prototype ===\n";
    Prototype* proto = new ConcretePrototype();
    Prototype* clone = proto->clone();
    clone->show();

    std::cout << "\n=== Simple Factory ===\n";
    Animal* animal = AnimalFactory::createAnimal(1);
    animal->speak();

    return 0;
}