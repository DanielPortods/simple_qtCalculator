#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <string>
#include <cstdlib>

using namespace std;

class Controller
{
public:
    Controller();
    ~Controller();
    string calculate(string expression);

private:
    string CURRENT_EXPRESSION;

    void set_current_expression(string exp);
    int verify(string exp);
    string resolve(int v_a, int v_b, char op);
    string resolve_d(float v_a, float v_b, char op);
    void parse(char oparation);
    /*string tim();
    string plus_min()*/
};

#endif // CONTROLLER_H
