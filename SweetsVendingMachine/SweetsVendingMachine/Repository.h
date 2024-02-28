#pragma once

#include "Produs.h"
#include <vector>

class Repository
{
    public:
        Repository() = default;
        ~Repository() = default;

        std::vector <Produs> GetAll() const;
        void Add(Produs Element);
        void RemoveByValue(Produs Element);
        void RemoveByIndex(unsigned int Index);
        void Modify(unsigned int Index, Produs Element);
        int Search(unsigned int Cod) const;
    protected:
        std::vector <Produs> List;
    private:
        bool IndexInRange(unsigned int Index) const;
};