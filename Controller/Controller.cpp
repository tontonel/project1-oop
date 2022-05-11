//
// Created by tionu on 4/23/2022.
//


#include "Controller.h"


Controller::Controller() : repo(FileRepo("../resources/data.csv")), undoRedo(UndoRedoManager(repo)) {}

void Controller::addProduct(Product* product) {
    repo.addProducts(product);
    UndoRedo* command = new UndoRedoAdd(product);
    undoRedo.execute(command);
}

const ProductRepo& Controller::seeAlLProducts() {
    return repo;
}

void Controller::updateProduct(const std::string& barcode, Product* product) {
    UndoRedo* command = new UndoRedoUpdate(repo.getProductByBarcode(barcode), product);
    undoRedo.execute(command);
    return repo.updateProduct(barcode, product);
}

void Controller::removeProduct(const std::string& barcode) {
    UndoRedo* command = new UndoRedoRemove(repo.getProductByBarcode(barcode));
    undoRedo.execute(command);
    repo.removeProduct(barcode);

}

void Controller::undo() {
    undoRedo.undo();
}

void Controller::redo() {
    undoRedo.redo();
}

