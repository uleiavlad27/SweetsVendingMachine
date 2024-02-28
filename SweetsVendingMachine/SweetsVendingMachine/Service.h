#pragma once

#include "FileRepository.h"
#include "Produs.h"

class Service
{
    public:
        Service(FileRepository Produse);
        ~Service() = default;

        std::vector <Produs> GetAll() const;
        void Add(Produs Element);
        void RemoveByValue(Produs Element);
        void RemoveByIndex(unsigned int Index);
        void Modify(unsigned int Index, Produs Element);
        int Search(unsigned int Cod) const;

        void Load();
        void Save();
    private:
        FileRepository Produse;
};