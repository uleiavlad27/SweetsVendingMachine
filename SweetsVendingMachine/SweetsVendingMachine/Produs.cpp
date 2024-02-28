#include "Produs.h"

Produs::Produs(unsigned int Cod, float Pret, std::string Nume)
{
    this -> Cod = Cod;
    this -> Pret = Pret;
    this -> Nume = Nume;
}

bool Produs::operator==(const Produs& Other) const
{
    return Cod == Other.Cod and Pret == Other.Pret and Nume == Other.Nume;
}

unsigned int Produs::GetCod() const
{
    return this -> Cod;
}

float Produs::GetPret() const
{
    return this -> Pret;
}

std::string Produs::GetNume() const
{
    return this -> Nume;
}

void Produs::SetPret(float Pret)
{
    this -> Pret = Pret;
}

void Produs::SetNume(std::string Nume)
{
    this -> Nume = Nume;
}
