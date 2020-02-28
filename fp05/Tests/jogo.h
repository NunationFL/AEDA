/*
 * jogo.h
 */

#ifndef JOGO_H_
#define JOGO_H_

#include "crianca.h"
#include <list>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Jogo
{
    list<Crianca> criancas;
public:
    Jogo();
    Jogo(list<Crianca>& lc2);
    static unsigned int numPalavras(string frase);
    void insereCrianca(const Crianca &c1);
    list<Crianca> getCriancasJogo() const;
    void setCriancasJogo(const list<Crianca>& l1);
    string escreve() const;
    Crianca& perdeJogo(string frase);
    list<Crianca>& inverte();
    list<Crianca> divide(unsigned id);
    bool operator==(Jogo& j2);
    list<Crianca> baralha() const;
};

#endif /* JOGO_H_ */
