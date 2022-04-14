#pragma once
#include "symbol.h"
class seven :
    public symbol
{
public:
    char getSymbol() override {
        return symbol_;
    }
private:
    char symbol_ = '7';
};

