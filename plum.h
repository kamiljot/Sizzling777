#pragma once
#include "symbol.h"
class plum :
    public symbol
{
public:
    char getSymbol() {
        return symbol_;
    }
private:
    char symbol_ = 'P';
};

