#ifndef NOCANDIDATO_H
#define NOCANDIDATO_H

#include<Candidato.h>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>

class NoCandidato
{
public:
    Candidato* conteudo;
    NoCandidato* head;
    NoCandidato* next;
    NoCandidato* tail= NULL;
    NoCandidato(Candidato* conteudo, NoCandidato *next);
    string toString();
};

#endif // NOCANDIDATO_H
