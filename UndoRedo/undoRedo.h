//
// Created by tionu on 5/10/2022.
//

#ifndef PROJECT1_UNDOREDO_H
#define PROJECT1_UNDOREDO_H
#include <stack>
#include "../Domain/Product.h"

class undoRedo {
private:
    std::stack<undoRedo*> undoStack;
    std::stack<undoRedo*> redoStack;
public:
    virtual void undo() = 0;
    virtual void redo() = 0;
};


#endif //PROJECT1_UNDOREDO_H
