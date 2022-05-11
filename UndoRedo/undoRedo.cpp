//
// Created by tionu on 5/10/2022.
//

#include "undoRedo.h"
#include <iostream>

void UndoRedoAdd::undo(FileRepo& repo) {
    repo.removeProduct(this->product->getBarcode());
}

void UndoRedoAdd::redo(FileRepo& repo) {
    repo.addProducts(this->product);
}

UndoRedoAdd::UndoRedoAdd(Product *product) {
    this->product = product;
}


void UndoRedoRemove::undo(FileRepo& repo) {
    repo.addProducts(this->product);
}

void UndoRedoRemove::redo(FileRepo& repo) {
    repo.removeProduct(this->product->getBarcode());
}

UndoRedoRemove::UndoRedoRemove(Product *product) {
        this->product = product;
}

void UndoRedoUpdate::undo(FileRepo& repo) {
    repo.updateProduct(newProduct->getBarcode(), oldProduct);
}

UndoRedoUpdate::UndoRedoUpdate(Product* oldProduct, Product* newProduct) {
    this->oldProduct = oldProduct;
    this->newProduct = newProduct;
}

void UndoRedoUpdate::redo(FileRepo& repo) {
    repo.updateProduct(oldProduct->getBarcode(), newProduct);
}

UndoRedoManager::UndoRedoManager(FileRepo& _repo) : repo(_repo){

}

void UndoRedoManager::undo() {
    if(!undoStack.empty()) {
        undoStack.top()->undo(this->repo);
        redoStack.push(undoStack.top());

        undoStack.pop();
    }
}

void UndoRedoManager::execute(UndoRedo* command) {
    while(!redoStack.empty())
        redoStack.pop();
    undoStack.push(command);
}

void UndoRedoManager::redo() {
    if(!redoStack.empty()) {
        redoStack.top()->redo(this->repo);
        undoStack.push(redoStack.top());
        redoStack.pop();
    }
}
