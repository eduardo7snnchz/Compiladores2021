#include <iostream>
#include <string>
using namespace std;

class AFN{
    std::string alfabetoSigma[]={};
    std::string estadosQ[]={};
    std::string estadosFinales[]={};
    string estadoInicialS="";

private:
    transiciones(estadosQ, alfabetoSigma){
        //Tabla de transiciones con array/lista(?)

    }

private: 
    funcionDeTransicion(){
          ///Determina el estado siguiente solo si dada la entrafda
        //existe un camino que pueda tomar
    }


};

class AFD{
    std::string alfabetoSigma[]={};
    std::string estadosQ[]={};
    std::string estadosFinales[]={};
    string estadoInicialS="";

private:
    transiciones(estadosQ, alfabetoSigma){
        //Tabla de transiciones con array/lista(?)
    }

private: 
    funcionDeTransicion(){
        ///Determina el único estado siguiente para el par que 
        //corresponde al estado actual y a la entrada
    }

};