#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Service.h"
#include "Produs.h"

class UI
{
    public:
        UI(Service Serv);
        ~UI() = default;

        void Run();
    private:
        Service Serv;
        float Balance = 0;
        std::vector <unsigned int> Bancnote {1, 5, 10, 20, 50, 100, 200, 500};
};
