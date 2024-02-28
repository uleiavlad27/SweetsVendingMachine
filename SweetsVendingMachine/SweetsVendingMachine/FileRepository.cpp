#include "FileRepository.h"

FileRepository::FileRepository(std::string Filename)
{
    this -> Filename = Filename;
}

void FileRepository::Load()
{
    this -> List.clear();

    std::ifstream File(this -> Filename);

    unsigned int Cod;
    float Pret;
    std::string Nume;

    while(File >> Cod >> Pret)
    {
        std::getline(File >> std::ws, Nume);
        Produs Prod(Cod, Pret, Nume);
        this -> List.push_back(Prod);
    }

    File.close();
}

void FileRepository::Save() const
{
    std::ofstream File(this -> Filename);

    for(unsigned int i = 0; i < this -> List.size(); i++)
    {
        File << this -> List[i].GetCod() << " " << this -> List[i].GetPret() << " " << this -> List[i].GetNume() << "\n";
    }

    File.close();
}
