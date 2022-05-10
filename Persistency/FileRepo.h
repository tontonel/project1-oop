//
// Created by tionu on 5/3/2022.
//

#ifndef PROJECT1_FILEREPO_H
#define PROJECT1_FILEREPO_H
#include <fstream>
#include <string>
#include "../Repository/ProductRepo.h"
#include "../Domain/Product.h"
#include <vector>

class FileRepo : public ProductRepo{
private:
    ProductRepo repo;
    std::string filePath;
    bool read_from_file();

public:
    explicit FileRepo(std::string);

};


#endif //PROJECT1_FILEREPO_H
