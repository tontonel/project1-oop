//
// Created by tionu on 5/3/2022.
//

#include "FileRepo.h"
#include <fstream>
#include <sstream>
#include "../Groceries/Groceries.h"
#include "../PersonalCare/PersonalCare.h"
#include "../Electronics/Electronics.h"
#include "../Exception/OpenFileException.h"

FileRepo::FileRepo(std::string  _filePath): ProductRepo(){
    this->filePath = _filePath;
    bool flagRead = read_from_file();
    if(!flagRead)
        throw OpenFileException("File " + filePath + " couldn't be opened\n");
}

bool FileRepo::read_from_file() {
    std::ifstream in{filePath};
    std::string line;
    if(!in.is_open())
        return false;
    while(getline(in, line)) {
        std::stringstream ss(line);
        std::string barcode, name, category, expDate;
        int pieces, guarantee;
        double price;
        std::string command, word;
        getline(ss, command, ',');
        getline(ss, barcode, ',');
        getline(ss, name, ',');
        getline(ss, category, ',');
        ss >> price;
        getline(ss, word, ',');
        ss >> pieces;
        getline(ss, word, ',');
        if(word == "1") {
            getline(ss, expDate, ',');
            this->addProducts(new Groceries(barcode, name, category, price, pieces, expDate));
        }
        else if(word == "2") {
            ss >> guarantee;
            this->addProducts(new Electronics(barcode, name, category, price, pieces, guarantee));
        }
        else if(word == "3") {
            this->addProducts(new PersonalCare(barcode, name, category, price, pieces));
        }
        else
            this->addProducts(new Product(barcode, name, category, price, pieces));
    }
    return true;
}