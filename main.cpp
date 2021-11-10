#include <iostream>
#include <math.h>
#include <iomanip>  

using namespace std;

int main (){

    
    int boletos=1;
    int bolt=171;
    float pt=0.6;
    float p1=0.42; // probabilidad de ganar $0.50
    float p2=0.15; // probabilidad de ganar $5.00
    float p3=0.024; // probabilidad de ganar $50.00
    float p4=0.006; // probabilidad de ganar $100.00
    float prov;



    cout << "Calculo de Probabilidad de Bolletos de loteria" << endl << endl;
    cout << "ingrese la cantidad de boletos comprados" << endl;
    cin >> boletos;
    cin.ignore();

    prov= pow (pt,boletos);

    cout << "Probabilidad de ganar premio es de : " << prov << endl;
    cout << "Probabilidad que su premio sea de $0.50 es : " << p1 << endl;
    cout << "Probabilidad que su premio sea de $5.00 es : " << p2 << endl;
    cout << "Probabilidad que su premio sea de $50.00 es : " << p3 << endl;
    cout << "Probabilidad que su premio sea de $100.00 es : " << p4 << endl;
    



}