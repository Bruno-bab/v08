#pragma once
#include<iostream>

namespace vsite::oop::v8 
{
    int input_num(std::istream& is);

    char input_op(std::istream& is);

    double calc(int x, char oper, int y);

    class exceptions
    {
    public:
        virtual std::string details() const = 0;
        virtual ~exceptions() = default;
    };

    class not_number : public exceptions
    {
    public:
        std::string details() const override
        {
            return "not a number";
        }
    };

    class not_operator : public exceptions
    {
    public:
        std::string details() const override 
        {
            return "invalid operation";
        }
    };

    class divide_zero : public exceptions
    {
    public:
        std::string details() const override 
        { 
            return "divide by zero"; 
        }
    };
}