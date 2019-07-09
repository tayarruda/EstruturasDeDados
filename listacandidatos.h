#ifndef LISTACANDIDATOS_H
#define LISTACANDIDATOS_H
#include "nocandidato.h"

class ListaCandidatos
{
public:
    NoCandidato* head;
    ListaCandidatos();
    void adicioneComoHead(Candidato* c);
    bool estaVazia();
    int tamamho();
    string toString();
};

#endif // LISTACANDIDATOS_H
