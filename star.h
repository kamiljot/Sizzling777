#pragma once
#include "symbol.h"
class star :
    public symbol
{
public:
    char getSymbol() {
        return symbol_;
    }
private:
    char symbol_ = 'S';
};

