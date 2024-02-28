#include "Repository.h"

void Repository::Add(Produs Element)
{
    for(unsigned int i = 0; i < this -> List.size(); i++)
    {
        if(this -> List[i].GetCod() == Element.GetCod())
        {
            return;
        }
    }

    this -> List.push_back(Element);
}

std::vector <Produs> Repository::GetAll() const
{
    return this -> List;
}

void Repository::RemoveByValue(Produs Element)
{
    for(unsigned int i = 0; i < this -> List.size(); i++)
    {
        if(this -> List[i] == Element)
        {
            this -> List.erase(this -> List.begin() + i);
            return;
        }
    }
}

void Repository::RemoveByIndex(unsigned int Index)
{
    if(! this -> IndexInRange(Index))
    {
        return;
    }

    this -> List.erase(this -> List.begin() + Index);
}

void Repository::Modify(unsigned int Index, Produs Element)
{
    if(! this -> IndexInRange(Index))
    {
        return;
    }

    this -> List[Index] = Element;
}

int Repository::Search(unsigned int Cod) const
{
    for(unsigned int i = 0; i < this -> List.size(); i++)
    {
        if(this -> List[i].GetCod() == Cod)
        {
            return i;
        }
    }

    return -1;
}

bool Repository::IndexInRange(unsigned int Index) const
{
    return Index < this -> List.size();
}