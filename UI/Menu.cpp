//
// Created by tionu on 4/24/2022.
//

#include "Menu.h"
#include <iostream>
#include <iomanip>

void Menu::displayMainMenu() {
    std::cout << std::setw(3) << std::right << "1.Add Product\n2.See all the products\n3.Remove a specific product\n4.Update a specific product\n5.Undo\n6.Redo";
}

void Menu::displayCategoryMenu() {
    std::cout << std::setw(3) << std::right << "1.Groceries\n2.Electronics\n3.Personal care\n4.Others\n";
}

