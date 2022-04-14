#pragma once
#include "symbol.h"
class cherry :
    public symbol
{
public:
    char getSymbol() {
        return symbol_;
    }
private:
    char symbol_ = 'C';
};

