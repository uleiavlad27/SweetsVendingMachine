#pragma once

#include "Repository.h"

#include <fstream>

class FileRepository : public Repository
{
    public:
        FileRepository(std::string Filename);
        ~FileRepository() = default;

        void Load();
        void Save() const;

    private:
        std::string Filename;
};
