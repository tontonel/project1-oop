#include "./Controller/Controller.h"

int main() {
    Controller controller;
    std::cout.fill(' ');
    while(true) {
        controller.setCommand1();
        if (controller.getCommand1() == 1) {
            controller.setCommand2();
            if (controller.getCommand2() != 0)
                controller.addProduct();
        }
        else if(controller.getCommand1() == 2) {
            controller.seeAlLProducts();
        }
        else if(controller.getCommand1() == 4) {
            controller.setCommand2();
            controller.updateProduct();
        }
        else if(controller.getCommand1() == 3) {
            controller.removeProduct();
        }
    }

    return 0;
}
