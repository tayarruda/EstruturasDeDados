#include "listacandidatos.h"
#include <nocandidato.h>
ListaCandidatos::ListaCandidatos()
{

    head = NULL;


}

void ListaCandidatos::adicioneComoHead(Candidato *c)
{
   NoCandidato* newhead = new NoCandidato(c, NULL);
   NoCandidato* aux = newhead;
   newhead->next=head;
   head -> aux;

}

bool ListaCandidatos::estaVazia()
{

    return (head==NULL);
}

int ListaCandidatos::tamamho()
{
    NoCandidato* cand = head;
    int tamanho;

    if (estaVazia()) {
        return 0;
    }
    while(cand){
        cand = cand -> next;
        tamanho++;

    }
    return tamanho;
}

string ListaCandidatos::toString()
{
    NoCandidato* cand;
    cand->toString();
}
