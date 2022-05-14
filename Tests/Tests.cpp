//
// Created by tionu on 5/11/2022.
//

#include "Tests.h"
#include <cassert>

///Product class Tests
void Tests::ProductTest() {
    Product product = Product("1234567", "shovel", "garden", 12, 2);
    assert(product.getBarcode() == "1234567");
    assert(product.getPieces() == 2);
    assert(product.getPrice() == 12);
    assert(product.getCategory() == "garden");
    assert(product.getName() == "shovel");
    product.setName("battery");
    assert(product.getName() == "battery");
    Electronics electronics = Electronics("1234567", "shovel", "garden", 12, 2, 3);
    assert(electronics.getGuarantee() == 3);
    Groceries groceries = Groceries("1234567", "shovel", "garden", 12, 2, "12/03/2027");
    assert(groceries.getExpDate() == "12/03/2027");
    PersonalCare personalCare = PersonalCare("1234567", "shovel", "garden", 12, 2);
}

///Repository class Tests
void Tests::RepositoryTest() {
    Product product = Product("1234567", "shovel", "garden", 12, 2);
    Electronics electronics = Electronics("1234336", "Battery", "", 12, 2, 3);
    PersonalCare personalCare = PersonalCare("8934567", "Skin Cream", "personal care", 30, 10);
    Groceries groceries = Groceries("1236767", "Peaches", "Groceries", 3, 300, "12/03/2023");
    ProductRepo repo = ProductRepo({&product, &electronics, &personalCare, &groceries});
    assert(repo.getProductByBarcode("1234567") != nullptr);
    repo.removeProduct("1236767");
    try {
        repo.getProductByBarcode("1236767");
        assert(false);
    } catch (...) {
        assert(true);
    }

    try {
        repo.addProducts(new Product("1234567", "shovel", "garden", 12, 2));
        assert(false);
    } catch (...) {
        assert(true);
    }
    repo.updateProduct("1234567", new Product("1234568", "shovel", "garden", 13, 2));
    assert(repo.getProductByBarcode("1234568")->getPrice() == 13);
}

///UndoRedo class Tests
void Tests::UndoRedoTest() {
    Product product = Product("1234567", "shovel", "garden", 12, 2);
    Electronics electronics = Electronics("1234336", "Battery", "", 12, 2, 3);
    PersonalCare personalCare = PersonalCare("8934567", "Skin Cream", "personal care", 30, 10);
    Groceries groceries = Groceries("1236767", "Peaches", "Groceries", 3, 300, "12/03/2023");
    FileRepo repo = FileRepo("../resources/dataTest.csv");
    repo.addProducts(&product);
    repo.addProducts(&electronics);
    repo.addProducts(&personalCare);
    UndoRedo* command = new UndoRedoAdd(&personalCare);
    UndoRedoManager undoRedo = UndoRedoManager(repo);
    undoRedo.execute(command);
    undoRedo.undo();
    try {
        repo.getProductByBarcode("8934567");
        assert(false);
    } catch (...) {
        assert(true);
    }
    undoRedo.redo();
    assert(repo.getProductByBarcode("8934567"));


}

void Tests::runAllTests() {
    Tests::UndoRedoTest();
    Tests::RepositoryTest();
    Tests::ProductTest();

}