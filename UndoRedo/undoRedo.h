//
// Created by tionu on 5/10/2022.
//

#ifndef PROJECT1_UNDOREDO_H
#define PROJECT1_UNDOREDO_H
#include <stack>
#include "../Domain/Product.h"
#include "../Persistency/FileRepo.h"

class UndoRedo {
public:
    UndoRedo() = default;
    virtual void undo(FileRepo&) = 0;
    virtual void redo(FileRepo&) = 0;
};
class UndoRedoAdd : public UndoRedo{
    Product* product;
public:
    UndoRedoAdd(Product*);
    void undo(FileRepo&) override;
    void redo(FileRepo&) override;
};

class UndoRedoRemove : public UndoRedo {
private:
    Product* product;
public:
    UndoRedoRemove(Product*);
    void undo(FileRepo&) override;
    void redo(FileRepo&) override;
};

class UndoRedoUpdate : public UndoRedo {
private:
    Product *oldProduct, *newProduct;
public:
    UndoRedoUpdate(Product*, Product*);
    void undo(FileRepo&) override;
    void redo(FileRepo&) override;
};

class UndoRedoManager {
private:
    std::stack<UndoRedo*> undoStack = {};
    std::stack<UndoRedo*> redoStack = {};
    FileRepo& repo;
public:
    explicit UndoRedoManager(FileRepo& _repo);
    void execute(UndoRedo*);
    void undo();
    void redo();

};

#endif //PROJECT1_UNDOREDO_H
