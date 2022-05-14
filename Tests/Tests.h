//
// Created by tionu on 5/11/2022.
//

#ifndef PROJECT1_TESTS_H
#define PROJECT1_TESTS_H
#include "../Domain/Product.h"
#include "../Repository/ProductRepo.h"
#include "../UndoRedo/undoRedo.h"
#include "../Electronics/Electronics.h"
#include "../Groceries/Groceries.h"
#include "../PersonalCare/PersonalCare.h"
#include "../Persistency/FileRepo.h"



class Tests {
private:
    static void ProductTest();
    static void RepositoryTest();
    static void UndoRedoTest();
public:
    static void runAllTests();
};


#endif //PROJECT1_TESTS_H
