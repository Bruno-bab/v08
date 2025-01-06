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
        virtual std::string details()
        {
            return "Unknown error";
        }
        virtual ~exceptions() = default;
    };

    class not_number : public exceptions
    {
    public:
        std::string details() override
        {
            return "That is not a number";
        }
    };

    class not_operator : public exceptions
    {
    public:
        std::string details() override 
        {
            return "That is not an operator";
        }
    };

    class divide_zero : public exceptions
    {
    public:
        std::string details() override 
        { 
            return "You tried to divide by zero"; 
        }
    };
}