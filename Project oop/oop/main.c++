#include <iostream>
#include "calculate.h"
using namespace std;
int main(){
    //This is calculator
    calculate x;
    cout<<x.add("Abdo","Nasser")<<endl;//Abdo Nasser
    cout<<x.add(9,7)<<endl;//16
    cout<<x.add(5 , 5 ,5)<<endl;//15
    cout<<x.sub(10,5)<<endl;//5
    cout<<x.mult(10,5)<<endl;//50
    cout<<x.divi(10,5)<<endl;//2
    cout<<x.pow(2,5)<<endl;//32
    cout<<x.fact(0)<<endl;//0
    cout<<x.fact(-1)<<endl;//0
    cout<<x.fact(5)<<endl;//120
    cout<<x.restofdivi(10,2)<<endl;//0
    cout<<x.ceil(3.3)<<endl;//4
    cout<<x.floor(3.3)<<endl;//3
    calculate y;
    cout<<y.add(2,2);
    return 0;
}