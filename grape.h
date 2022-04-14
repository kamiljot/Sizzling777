#pragma once
#include "symbol.h"
class grape :
    public symbol
{
public:
    char getSymbol() {
        return symbol_;
    }
private:
    char symbol_ = 'G';
};

