#pragma once
#include "symbol.h"
class watermelon :
    public symbol
{
public:
    char getSymbol() {
        return symbol_;
    }
private:
    char symbol_ = 'W';
};

