//Librerías
#include <iostream>
#include <math.h>
#include <iomanip>  

using namespace std;

//Variables globales
int boletos=0, tries = 0;
int bolt=171;
float chests= 9.0, key= 7.0, coins= 10.0;
float pt=0.6;
float p1=0.42; // probabilidad de ganar $0.50
float p2=0.15; // probabilidad de ganar $5.00
float p3=0.024; // probabilidad de ganar $50.00
float p4=0.006; // probabilidad de ganar $100.00
float prov, probaCoin, probaChest, probaKey, probaWin;
float probMC, probMCh, probMK;
int play = 0;
bool cont = true;


int main (){

do{
    cout << "******Calculo de Probabilidad de Bolletos de loteria******" << endl << endl;
    cout << "¿Desea jugar? Presione 1 para jugar y 2 para salir" << endl;
    cin >> play;
    cin.ignore();
    cout << endl;

    if(play == 2){
        cout << "Es una lastima, para la próxima sera. Que tenga un buen día" << endl;
        cont = false;
    }

    else{
        cout << "Ingrese la cantidad de boletos comprados:" << endl;
    cin >> boletos;
    cin.ignore();
    cout << endl;

    if(boletos == 0){
        cout << "Lo sentimos, pero sin boletos no puede jugar" << endl;
        return 0;
    }
    else{

     // Calculos  
    probaCoin = 1.00/coins;
    probaKey = 1.00/key;
    probaChest = 1.00/chests;
    probMC = 3.00/coins;
    probMCh = 3.00/chests;
    probMK = 3.00/key;
    probaWin = probaChest + probaCoin + probaKey;
    prov= pow (pt,boletos);

    
    cout << "Para poder obtener el mayor premio de $100.00 usted debe encontrar 1 de cada figura: cofre (9), llave (7) y moneda (10). Puede raspar 3 figuras. Su probabilidad de encontrarlas es de:\t" << endl;
    cout << "Para las monedas: "<< probaCoin << "\t"<< endl;
    cout << "Para las llaves: "<< probaKey << "\t"<< endl;
    cout << "Para los cofres: "<< probaChest << "\t"<< endl;
    cout << "La probabilidad total es: "<< probaWin << "\t"<< endl;
    cout << "-----------------------" <<endl;

    cout << "Para poder obtener el segundo premio de $50.00 usted debe encontrar 3 figuras de monedas (10). Puede raspar 3 figuras. Su probabilidad de encontrarlas es de:\t" << endl;
    cout << "Para las monedas: "<< probMC << "\t"<< endl;
    cout << "-----------------------" <<endl;

    cout << "Para poder obtener el tercer premio de %5.00 usted debe encontrar 3 figuras de cofres (9). Puede raspar 3 figuras. Su probabilidad de encontrarlas es de:\t" << endl;
    cout << "Para los cofres: "<< probMCh << "\t"<< endl;
    cout << "-----------------------" <<endl;

    cout << "Para poder obtener el cuarto premio de $0.50 usted debe encontrar 3 iguras de llaves (7). Puede raspar 3 figuras. Su probabilidad de encontrarlas es de:\t" << endl;
    cout << "Para las llaves: "<< probMK << "\t"<< endl;
    cout << "-----------------------" <<endl;

    cout << "Probabilidad de ganar premio es de : " << prov << endl;
    cout << "Probabilidad que su premio sea de $0.50 es : " << p1 << endl;
    cout << "Probabilidad que su premio sea de $5.00 es : " << p2 << endl;
    cout << "Probabilidad que su premio sea de $50.00 es : " << p3 << endl;
    cout << "Probabilidad que su premio sea de $100.00 es : " << p4 << endl;
    cout << "-----------------------" <<endl;

        }

    } 

}while(cont);
}
