#include "controller.h"
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

Controller::Controller()
{
}

Controller::~Controller(){
    delete this;
}

int Controller::verify(string exp){
    size_t sz = exp.size();

    if(sz == 0) return 1;

    for (size_t i=0; i<sz; i++){
        if(exp[i]==','){
            if(i==0 || i==sz-1) return 1;
            if(!(isdigit(exp[i-1]) || isdigit(exp[i+1]))) return 1;
        }

        if(exp[i]=='-' && sz==1) return 1;
        if(exp[i]=='-' && !isdigit(exp[i+1])) return 1;
    }

    return 0;
}

string Controller::resolve(int v_a, int v_b, char op){
    int res;

    if(op == '/') res = v_a / v_b;
    else if(op == 'x') res = v_a * v_b;
    else if(op == '+') res = v_a + v_b;
    else if(op == '-') res = v_a - v_b;

    return to_string(res);
}

string Controller::resolve_d(float v_a, float v_b, char op){
    float res;

    if(op == '/') res = v_a / v_b;
    else if(op == 'x') res = v_a * v_b;
    else if(op == '+') res = v_a + v_b;
    else if(op == '-') res = v_a - v_b;
    cout << "      " << "debug_4.1 " << res << endl;

    string ret = to_string(res);
    ret[ret.find('.')] = ',';
    return ret;
}

void Controller::parse(char operation){
    if(!CURRENT_EXPRESSION.compare("Erro!")) return;
    cout << operation << ' ' << CURRENT_EXPRESSION << endl;

    while(1){
        size_t i = CURRENT_EXPRESSION.find_first_of(operation);
        if(i == string::npos) break;

        int i_l, sz = CURRENT_EXPRESSION.size();

        if(i == 0 && sz == 1 && operation != '-'){
            CURRENT_EXPRESSION = "Erro!";
            break;
        }

        for(i_l = i-1;;i_l--){
            if(!isdigit(CURRENT_EXPRESSION[i_l]) && CURRENT_EXPRESSION[i_l] != ','){
                i_l++;
                break;
            }
            if(i_l == 0) break;
        }
        cout << "   " << "debug_1 " << i << "   " << i_l << endl;

        int i_r = i+1;
        if(CURRENT_EXPRESSION[i_r]=='-') i_r++;
        for(;;i_r++){
            if(!isdigit(CURRENT_EXPRESSION[i_r]) && CURRENT_EXPRESSION[i_r] != ','){
                i_r--;
                break;
            }
            if(i_r == sz-1) break;
        }
        cout << "   " << "debug_2 " << i_r << endl;

        string value_a = CURRENT_EXPRESSION.substr(i_l, i-i_l),
               value_b = CURRENT_EXPRESSION.substr(i+1, i_r-i);
        cout << "   " << "debug_3 " << value_a << " " << value_b << endl;

        if(verify(value_a) || verify(value_b)){
            CURRENT_EXPRESSION = "Erro!";
            break;
        }

        int num_int = 1;
        if(value_a.find(',') != string::npos){
            value_a[value_a.find(',')] = '.';
            num_int = 0;
        }
        if(value_b.find(',') != string::npos){
            value_b[value_b.find(',')] = '.';
            num_int = 0;
        }

        string res = num_int ?
                     resolve_d(atof(value_a.c_str()), atof(value_b.c_str()), operation) :
                     resolve_d(atof(value_a.c_str()), atof(value_b.c_str()), operation);

        string aux_l = CURRENT_EXPRESSION.substr(0, i_l),
               aux_r = CURRENT_EXPRESSION.substr(i_r+1, CURRENT_EXPRESSION.size()-i_r);

        aux_l.append(res);
        aux_l.append(aux_r);

        cout << "   " << "debug_4 " << aux_l << endl;

        CURRENT_EXPRESSION = aux_l;
    }
}

string Controller::calculate(string expression){
    CURRENT_EXPRESSION.clear();
    CURRENT_EXPRESSION = expression;

    char ops[4] = {'/', 'x', '+', '-'};
    for(int i=0; i<4; i++) parse(ops[i]);

    return CURRENT_EXPRESSION;
}
