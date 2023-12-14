#if !defined(PARTIDO_H)
#define PARTIDO_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "candidato.h"

class Partido {
  private:
    int numero;
    string sigla;
    int federacao;
    int votosLegenda;
    int votosNominais;
    std::vector<Candidato> candidatos;

  public:
    Partido(const int &numero, const string &sigla, const int &federacao);
    const int &getNumero() const;
    const string &getSigla() const;
    const int &getFederacao() const;
    const int &getVotosLegenda() const;
    const int &getVotosNominais() const;
    const std::vector<Candidato> &getCandidatos() const;
    void addCandidato(Candidato &candidato);
    void addVotosLegenda(int votosLegenda);
    void addVotosNominais(int numeroVotos);
};

#endif // PARTIDO_H
