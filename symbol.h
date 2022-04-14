#pragma once


class symbol
{
public:
    symbol() {
    };
    virtual char getSymbol() {
        return symbol_;
    }


private:
    char symbol_ = 'u';
};



