#pragma once
#include "symbol.h"
class lemon :
    public symbol
{
public: 
    char getSymbol() {
        return symbol_;
    }

private:
    char symbol_ = 'L';
};

