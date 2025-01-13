#include "app.h"

namespace vsite::oop::v8
{
    int input_num(std::istream& is)
    {
        int x;
        is >> x;
        if (is.fail())
            throw not_number();
        return x;
    }

    char input_op(std::istream& is)
    {
        char a;
        is >> a;
        std::string operators = "+-*/";
        for (int i = 0; i <= operators.size(); i++)
        {
            if (a == operators[i])
            {
                return a;
            }
        }
        throw not_operator();
    }

    double calc(int x, char oper, int y)
    {
        switch (oper)
        {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            if (y == 0)
                throw divide_zero();
            return x / static_cast<double>(y);
        default:
            throw not_operator();
        }
    }
}