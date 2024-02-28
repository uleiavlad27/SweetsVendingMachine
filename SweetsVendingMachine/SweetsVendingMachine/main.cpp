#include "Tests.h"
#include "UI.h"
#include "Service.h"
#include "FileRepository.h"
#include "Produs.h"

int main()
{
    //TestsRunAll();

    FileRepository Repo("C:\\Users\\vlads\\Desktop\\lab9_10\\Produse.txt");
    
    Service Serv(Repo);

    Produs Produs1(1, 10.2, "Corn");
    Produs Produs2(2, 5.23, "Apa");
    Produs Produs3(3, 1.0, "Ciocolata");
    Produs Produs4(4, 4.5, "Suc");
    Produs Produs5(5, 100.4, "Limonada");
    Produs Produs6(6, 76.54, "Oua");
    Produs Produs7(7, 23.54, "Lapte");
    Produs Produs8(8, 33.22, "Paine");

    Serv.Add(Produs1);
    Serv.Add(Produs2);
    Serv.Add(Produs3);
    Serv.Add(Produs4);
    Serv.Add(Produs5);
    Serv.Add(Produs6);
    Serv.Add(Produs7);
    Serv.Add(Produs8);

    UI UserInterface(Serv);

    while(true)
    {
        UserInterface.Run();
    }
}