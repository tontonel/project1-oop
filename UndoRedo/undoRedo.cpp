//
// Created by tionu on 5/10/2022.
//

#include "undoRedo.h"
#include <iostream>

///undo add operation
///@param repo a reference to FIleRepo
void UndoRedoAdd::undo(FileRepo& repo) {
    repo.removeProduct(this->product->getBarcode());
}

///redo add operation
///@param repo a reference to FIleRepo
void UndoRedoAdd::redo(FileRepo& repo) {
    repo.addProducts(this->product);
}

///constructor
UndoRedoAdd::UndoRedoAdd(Product *product) {
    this->product = product;
}

///undo remove operation
///@param repo a reference to FIleRepo
void UndoRedoRemove::undo(FileRepo& repo) {
    repo.addProducts(this->product);
}

///redo remove operation
///@param repo a reference to FIleRepo
void UndoRedoRemove::redo(FileRepo& repo) {
    repo.removeProduct(this->product->getBarcode());
}

///constructor
UndoRedoRemove::UndoRedoRemove(Product *product) {
        this->product = product;
}

///undo update operation
///@param repo a reference to FIleRepo
void UndoRedoUpdate::undo(FileRepo& repo) {
    repo.updateProduct(newProduct->getBarcode(), oldProduct);
}

///redo update operation
///@param repo a reference to FIleRepo
UndoRedoUpdate::UndoRedoUpdate(Product* oldProduct, Product* newProduct) {
    this->oldProduct = oldProduct;
    this->newProduct = newProduct;
}

///constructor
void UndoRedoUpdate::redo(FileRepo& repo) {
    repo.updateProduct(oldProduct->getBarcode(), newProduct);
}

///constructor
UndoRedoManager::UndoRedoManager(FileRepo& _repo) : repo(_repo){

}

///undo manger for polymorphic UndoRedo object
void UndoRedoManager::undo() {
    if(!undoStack.empty()) {
        undoStack.top()->undo(this->repo);
        redoStack.push(undoStack.top());

        undoStack.pop();
    }
}

///adds an undo or redo operation on stack
void UndoRedoManager::execute(UndoRedo* command) {
    while(!redoStack.empty())
        redoStack.pop();
    undoStack.push(command);
}

///redo manage for polymorphic UndoRedo object
void UndoRedoManager::redo() {
    if(!redoStack.empty()) {
        redoStack.top()->redo(this->repo);
        undoStack.push(redoStack.top());
        redoStack.pop();
    }
}
