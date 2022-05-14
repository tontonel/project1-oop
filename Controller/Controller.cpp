//
// Created by tionu on 4/23/2022.
//


#include "Controller.h"


Controller::Controller() : repo(FileRepo("../resources/data.csv")), undoRedo(UndoRedoManager(repo)) {}

///this controls adding a product in repository
///@param product is a Product Polymorphic pointer
void Controller::addProduct(Product* product) {
    repo.addProducts(product);
    UndoRedo* command = new UndoRedoAdd(product);
    undoRedo.execute(command);
}

///this returns all the Products in the repository
///@returns ProductRepo object
const ProductRepo& Controller::seeAlLProducts() {
    return repo;
}

///this controls updating an Product in ProductRepo
///@param barcode target barcode string
///@param product new Polymorphic object
void Controller::updateProduct(const std::string& barcode, Product* product) {
    UndoRedo* command = new UndoRedoUpdate(repo.getProductByBarcode(barcode), product);
    undoRedo.execute(command);
    return repo.updateProduct(barcode, product);
}

///removes a target product with given barcode in ProductRepo
///@param barcode the target barcode
void Controller::removeProduct(const std::string& barcode) {
    UndoRedo* command = new UndoRedoRemove(repo.getProductByBarcode(barcode));
    undoRedo.execute(command);
    repo.removeProduct(barcode);

}

///Undo a repository operation
void Controller::undo() {
    undoRedo.undo();
}

///redo a repository operation
void Controller::redo() {
    undoRedo.redo();
}

