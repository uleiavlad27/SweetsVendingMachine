#include "UI.h"

UI::UI(Service Serv): Serv(std::move(Serv))
{

}

void UI::Run()
{
    std::cout << "\n\n\n\n\n      | Lab 9 - 10 |\n\n";
    std::cout << "1. Afiseaza produsele\n";
    std::cout << "2. Cauta produs\n";
    std::cout << "3. Arata balance\n";
    std::cout << "4. Adauga balance\n";
    std::cout << "5. Cumpara produs\n";
    std::cout << "exit\n\n";
    
    std::cout << "Comanda: ";
    std::string Command;
    std::cin >> Command;
    std::cout << "\n\n";

    if(Command == "1")
    {
        std::vector <Produs> Produse = Serv.GetAll();
        
        for(unsigned int i = 0; i < Produse.size(); i++)
        {
            std::cout << i << " -> Cod: " << Produse[i].GetCod() << " Nume: " << Produse[i].GetNume() << " Pret: " << Produse[i].GetPret() << "\n";
        }
    }
    else if(Command == "2")
    {
        unsigned int Cod;

        std::cout << "Introdu Codul: ";
        std::cin >> Cod;
        
        unsigned int Index = Serv.Search(Cod);

        if(Index == -1)
        {
            std::cout << "Produsul nu exista\n";
        }
        else
        {
            std::cout << "Elementul este pe pozitia: " << Index << "\n";
            std::cout << "Nume: " << Serv.GetAll()[Index].GetNume() << "\n";
            std::cout << "Pret: " << Serv.GetAll()[Index].GetPret() << "\n";
        }
    }
    else if(Command == "3")
    {
        std::cout << "Balance: " << this -> Balance << "\n";
    }
    else if(Command == "4")
    {
        for(unsigned int i = 0; i < this -> Bancnote.size(); i++)
        {
            std::cout << i + 1 << ". " << Bancnote[i] << "\n";
        }

        unsigned int Option;

        std::cout << "Selectati valoare: ";
        std::cin >> Option;

        if(Option > this -> Bancnote.size())
        {
            std::cout << "Valoare inexistenta\n\n";
            return;
        }

        this -> Balance = this -> Balance + Bancnote[Option - 1];
    }
    else if(Command == "5")
    {
        unsigned int Cod;

        std::cout << "Introdu Codul: ";
        std::cin >> Cod;
        
        unsigned int Index = Serv.Search(Cod);

        if(Index == -1)
        {
            std::cout << "Produsul nu exista\n";
        }
        else
        {
            if(this -> Balance < Serv.GetAll()[Index].GetPret())
            {
                std::cout << "Esti prea sarac !\n";
                return;
            }

            this -> Balance = this -> Balance - Serv.GetAll()[Index].GetPret();

            std::cout << "Produsul a fost achzitionat:\n";
            std::cout << "Nume: " << Serv.GetAll()[Index].GetNume() << "\n";
            std::cout << "Pret: " << Serv.GetAll()[Index].GetPret() << "\n";
        }
    }
    else if(Command == "6"){
        Serv.Load();
    }
    else if(Command == "exit")
    {
        exit(0);
    }
    else
    {
        std::cout << "Comanda nu exista !";
    }

    Serv.Save();
}
