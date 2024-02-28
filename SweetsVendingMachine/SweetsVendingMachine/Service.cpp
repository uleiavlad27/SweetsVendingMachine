#include "Service.h"

Service::Service(FileRepository Produse): Produse(std::move(Produse))
{

}

void Service::Add(Produs Element)
{
    this -> Produse.Add(Element);
}

std::vector <Produs> Service::GetAll() const
{
    return this -> Produse.GetAll();
}

void Service::RemoveByValue(Produs Element)
{
    this -> Produse.RemoveByValue(Element);
}

void Service::RemoveByIndex(unsigned int Index)
{
    this -> Produse.RemoveByIndex(Index);
}

void Service::Modify(unsigned int Index, Produs Element)
{
    this -> Produse.Modify(Index, Element);
}

int Service::Search(unsigned int Cod) const
{
    return this -> Produse.Search(Cod);
}

void Service::Load()
{
    this -> Produse.Load();
}

void Service::Save()
{
    this -> Produse.Save();
}