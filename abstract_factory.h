#pragma once
#include <iostream>

class Button {
public:
    virtual void paint() = 0;
};

class WindowsButton : public Button {
public:
    void paint() override {
        std::cout << "Windows Button\n";
    }
};

class MacButton : public Button {
public:
    void paint() override {
        std::cout << "Mac Button\n";
    }
};

class GUIFactory {
public:
    virtual Button* createButton() = 0;
};

class WindowsFactory : public GUIFactory {
public:
    Button* createButton() override {
        return new WindowsButton();
    }
};

class MacFactory : public GUIFactory {
public:
    Button* createButton() override {
        return new MacButton();
    }
};