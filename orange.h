#pragma once
#include "symbol.h"
class orange :
    public symbol
{
public:
    char getSymbol() {
        return symbol_;
    }
private:
    char symbol_ = 'O';
};

