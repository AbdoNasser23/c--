#include <string>
using namespace std;
class calculate
{
public:
    double add(double n1 ,double n2);
    double add(double n1 ,double n2 , double n3);
    string add(string name1 , string name2);
    double sub(double n1 , double n2);
    double mult(double n1 ,double n2);
    double divi(double n1 ,double n2);
    double pow(double n1 ,double n2);
    int restofdivi(int n1 , int n2);
    int fact(int n1);
    double ceil(double n1);
    double floor(double n1);
    calculate(/* args */);
    ~calculate();
};
