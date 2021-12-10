/*
* Analizador Léxico
* Compiladores 2022-1
* Grupo: 1
* Integrantes: Durán González Lizeth        |   García Meneses jeremy   
            Mendoza de la Vega Elizabeth    |   Parada Pérez Jesús Bryan
*
* Descripción:  Llamada a los métodos del análisis léxico. Código que
*               abre el archivo prueba y lo pasa al analizador léxico.
*/

#include <iostream>
#include <fstream>
#include "Scanner.h"

using namespace std;
using namespace COMP;

int main(int argc, char *argv[]){
	if(argc < 2){
		cout<<"Faltan argumentos"<<endl;
		return EXIT_FAILURE;

	}
	/*Crea el objeto archivo*/
	filebuf fb;
	fb.open(string(argv[1]), ios::in);
	
	/*Lectura del archivo que contiene el código*/
	istream in(&fb);
	
	/*Se pasa el contenido del archivo al lexer*/
	Scanner lexer(&in); 
	int token = lexer.yylex();

	/*Lectura de tokens*/
	while(token != 0){
		cout<<token <<" , "<< lexer.YYText()<<endl;
		token = lexer.yylex();
	}
	fb.close();
	return 0;
}