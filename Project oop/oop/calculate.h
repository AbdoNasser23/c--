#include "calc.h"
#include <string>
using namespace std;
calculate::calculate()
{
}

calculate::~calculate()
{
}
double calculate::add(double n1 , double n2){
    return n1 + n2;
}
double calculate::add(double n1 , double n2 , double n3){
    return n1 + n2 + n3;
}
string calculate::add(string name1 , string name2){
    return name1 + " " + name2;
}
double calculate::sub(double n1 , double n2){
    return n1 - n2;
}
double calculate::mult(double n1 , double n2){
    return n1 * n2;
}
double calculate::divi(double n1 , double n2){
    return n1 / n2;
}
double calculate::pow(double n1 , double n2 ){
    int result = 1 ;
    for(int i = 0 ; i < n2 ; i++){
        result *= n1;
    }
    return result;
}
int calculate::restofdivi(int n1 , int n2){
    return n1 % n2;
}
int calculate::fact(int n1){
        int result = 1 ;
        if(n1 <= 0){
            result = 0;
        }
        else{
            for(int i = 1 ; i <= n1 ; i++){
                result *= i;
            }
        }
        return result;
}
double calculate::floor(double n1){
        return (int)n1;
}
double calculate::ceil(double n1){
    return (int)n1 + 1 ;
}