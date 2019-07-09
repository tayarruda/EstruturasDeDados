#include "nocandidato.h"

NoCandidato::NoCandidato(Candidato* _conteudo, NoCandidato* _next){

    this->conteudo = _conteudo;
    this->next = _next;

}

string NoCandidato::toString(){
    stringstream stream;

    stream << conteudo->toString() << " -> " << next->conteudo->toString()<< "->" << tail;

    return stream.str();


}
