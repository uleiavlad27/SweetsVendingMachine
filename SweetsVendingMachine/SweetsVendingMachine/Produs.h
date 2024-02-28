#pragma once

#include <string>

class Produs
{
    public:
        Produs(unsigned int Cod, float Pret, std::string Nume);
        ~Produs() = default;

        bool operator==(const Produs& Other) const;

        unsigned int GetCod() const;
        float GetPret() const;
        std::string GetNume() const;

        void SetPret(float Pret);
        void SetNume(std::string Nume);
    private:
        unsigned int Cod;
        float Pret;
        std::string Nume;
};