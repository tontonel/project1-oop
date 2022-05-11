cmake_minimum_required(VERSION 3.21)
project(project1)

set(CMAKE_CXX_STANDARD 14)

add_executable(project1 main.cpp Controller/Controller.cpp Controller/Controller.h Domain/Product.cpp Domain/Product.h Repository/ProductRepo.cpp Repository/ProductRepo.h UI/UI.cpp UI/UI.h Exception/IdenticException.cpp Exception/IdenticException.h Exception/NoElementException.cpp Exception/NoElementException.h Groceries/Groceries.cpp Groceries/Groceries.h PersonalCare/PersonalCare.cpp PersonalCare/PersonalCare.h Electronics/Electronics.cpp Electronics/Electronics.h UI/Menu.cpp UI/Menu.h Exception/InvalidInputException.cpp Exception/InvalidInputException.h Exception/InvalidBarcodeException.cpp Exception/InvalidBarcodeException.h Exception/InvalidQuantityException.cpp Exception/InvalidQuantityException.h Utilty/Uitlity.cpp Utilty/Uitlity.h Exception/InvalidDateException.cpp Exception/InvalidDateException.h Persistency/FileRepo.cpp Persistency/FileRepo.h Exception/OpenFileException.cpp Exception/OpenFileException.h UndoRedo/undoRedo.cpp UndoRedo/undoRedo.h Tests/Tests.cpp Tests/Tests.h)
