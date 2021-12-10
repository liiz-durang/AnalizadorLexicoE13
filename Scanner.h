/*
* Analizador Léxico
* Compiladores 2022-1
* Grupo: 1
* Integrantes: Durán González Lizeth        |   García Meneses jeremy   
            Mendoza de la Vega Elizabeth    |   Parada Pérez Jesús Bryan
*
* Descripción: Clase Scanner hereda de clase yyFlexLexer
*/

#ifndef __SCANNER_HPP__
#define __SCANNER_HPP__ 1

#if !defined(yyFlexLexerOnce)

#include <FlexLexer.h>
#endif

namespace COMP
{

    class Scanner : public yyFlexLexer
    {
    public:
        Scanner(std::istream *in) : yyFlexLexer(in){};

        using FlexLexer::yylex;
        virtual int yylex();

    private:
        const int ERROR = -1;
    };

}

#endif /* END __SCANNER_H__ */