# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/OOP_labs/project1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/OOP_labs/project1/build

# Include any dependencies generated for this target.
include CMakeFiles/project1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/project1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/project1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project1.dir/flags.make

CMakeFiles/project1.dir/main.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/main.cpp.o: ../main.cpp
CMakeFiles/project1.dir/main.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project1.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/main.cpp.o -MF CMakeFiles/project1.dir/main.cpp.o.d -o CMakeFiles/project1.dir/main.cpp.o -c /mnt/d/OOP_labs/project1/main.cpp

CMakeFiles/project1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/OOP_labs/project1/main.cpp > CMakeFiles/project1.dir/main.cpp.i

CMakeFiles/project1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/OOP_labs/project1/main.cpp -o CMakeFiles/project1.dir/main.cpp.s

CMakeFiles/project1.dir/Controller/Controller.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Controller/Controller.cpp.o: ../Controller/Controller.cpp
CMakeFiles/project1.dir/Controller/Controller.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project1.dir/Controller/Controller.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/Controller/Controller.cpp.o -MF CMakeFiles/project1.dir/Controller/Controller.cpp.o.d -o CMakeFiles/project1.dir/Controller/Controller.cpp.o -c /mnt/d/OOP_labs/project1/Controller/Controller.cpp

CMakeFiles/project1.dir/Controller/Controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Controller/Controller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/OOP_labs/project1/Controller/Controller.cpp > CMakeFiles/project1.dir/Controller/Controller.cpp.i

CMakeFiles/project1.dir/Controller/Controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Controller/Controller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/OOP_labs/project1/Controller/Controller.cpp -o CMakeFiles/project1.dir/Controller/Controller.cpp.s

CMakeFiles/project1.dir/Domain/Product.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Domain/Product.cpp.o: ../Domain/Product.cpp
CMakeFiles/project1.dir/Domain/Product.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/project1.dir/Domain/Product.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/Domain/Product.cpp.o -MF CMakeFiles/project1.dir/Domain/Product.cpp.o.d -o CMakeFiles/project1.dir/Domain/Product.cpp.o -c /mnt/d/OOP_labs/project1/Domain/Product.cpp

CMakeFiles/project1.dir/Domain/Product.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Domain/Product.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/OOP_labs/project1/Domain/Product.cpp > CMakeFiles/project1.dir/Domain/Product.cpp.i

CMakeFiles/project1.dir/Domain/Product.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Domain/Product.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/OOP_labs/project1/Domain/Product.cpp -o CMakeFiles/project1.dir/Domain/Product.cpp.s

CMakeFiles/project1.dir/Repository/ProductRepo.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Repository/ProductRepo.cpp.o: ../Repository/ProductRepo.cpp
CMakeFiles/project1.dir/Repository/ProductRepo.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/project1.dir/Repository/ProductRepo.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/Repository/ProductRepo.cpp.o -MF CMakeFiles/project1.dir/Repository/ProductRepo.cpp.o.d -o CMakeFiles/project1.dir/Repository/ProductRepo.cpp.o -c /mnt/d/OOP_labs/project1/Repository/ProductRepo.cpp

CMakeFiles/project1.dir/Repository/ProductRepo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Repository/ProductRepo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/OOP_labs/project1/Repository/ProductRepo.cpp > CMakeFiles/project1.dir/Repository/ProductRepo.cpp.i

CMakeFiles/project1.dir/Repository/ProductRepo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Repository/ProductRepo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/OOP_labs/project1/Repository/ProductRepo.cpp -o CMakeFiles/project1.dir/Repository/ProductRepo.cpp.s

CMakeFiles/project1.dir/UI/UI.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/UI/UI.cpp.o: ../UI/UI.cpp
CMakeFiles/project1.dir/UI/UI.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/project1.dir/UI/UI.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/UI/UI.cpp.o -MF CMakeFiles/project1.dir/UI/UI.cpp.o.d -o CMakeFiles/project1.dir/UI/UI.cpp.o -c /mnt/d/OOP_labs/project1/UI/UI.cpp

CMakeFiles/project1.dir/UI/UI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/UI/UI.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/OOP_labs/project1/UI/UI.cpp > CMakeFiles/project1.dir/UI/UI.cpp.i

CMakeFiles/project1.dir/UI/UI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/UI/UI.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/OOP_labs/project1/UI/UI.cpp -o CMakeFiles/project1.dir/UI/UI.cpp.s

CMakeFiles/project1.dir/Exception/IdenticException.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Exception/IdenticException.cpp.o: ../Exception/IdenticException.cpp
CMakeFiles/project1.dir/Exception/IdenticException.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/project1.dir/Exception/IdenticException.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/Exception/IdenticException.cpp.o -MF CMakeFiles/project1.dir/Exception/IdenticException.cpp.o.d -o CMakeFiles/project1.dir/Exception/IdenticException.cpp.o -c /mnt/d/OOP_labs/project1/Exception/IdenticException.cpp

CMakeFiles/project1.dir/Exception/IdenticException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Exception/IdenticException.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/OOP_labs/project1/Exception/IdenticException.cpp > CMakeFiles/project1.dir/Exception/IdenticException.cpp.i

CMakeFiles/project1.dir/Exception/IdenticException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Exception/IdenticException.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/OOP_labs/project1/Exception/IdenticException.cpp -o CMakeFiles/project1.dir/Exception/IdenticException.cpp.s

CMakeFiles/project1.dir/Exception/NoElementException.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Exception/NoElementException.cpp.o: ../Exception/NoElementException.cpp
CMakeFiles/project1.dir/Exception/NoElementException.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/project1.dir/Exception/NoElementException.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/Exception/NoElementException.cpp.o -MF CMakeFiles/project1.dir/Exception/NoElementException.cpp.o.d -o CMakeFiles/project1.dir/Exception/NoElementException.cpp.o -c /mnt/d/OOP_labs/project1/Exception/NoElementException.cpp

CMakeFiles/project1.dir/Exception/NoElementException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Exception/NoElementException.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/OOP_labs/project1/Exception/NoElementException.cpp > CMakeFiles/project1.dir/Exception/NoElementException.cpp.i

CMakeFiles/project1.dir/Exception/NoElementException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Exception/NoElementException.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/OOP_labs/project1/Exception/NoElementException.cpp -o CMakeFiles/project1.dir/Exception/NoElementException.cpp.s

CMakeFiles/project1.dir/Groceries/Groceries.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Groceries/Groceries.cpp.o: ../Groceries/Groceries.cpp
CMakeFiles/project1.dir/Groceries/Groceries.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/project1.dir/Groceries/Groceries.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/Groceries/Groceries.cpp.o -MF CMakeFiles/project1.dir/Groceries/Groceries.cpp.o.d -o CMakeFiles/project1.dir/Groceries/Groceries.cpp.o -c /mnt/d/OOP_labs/project1/Groceries/Groceries.cpp

CMakeFiles/project1.dir/Groceries/Groceries.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Groceries/Groceries.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/OOP_labs/project1/Groceries/Groceries.cpp > CMakeFiles/project1.dir/Groceries/Groceries.cpp.i

CMakeFiles/project1.dir/Groceries/Groceries.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Groceries/Groceries.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/OOP_labs/project1/Groceries/Groceries.cpp -o CMakeFiles/project1.dir/Groceries/Groceries.cpp.s

CMakeFiles/project1.dir/PersonalCare/PersonalCare.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/PersonalCare/PersonalCare.cpp.o: ../PersonalCare/PersonalCare.cpp
CMakeFiles/project1.dir/PersonalCare/PersonalCare.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/project1.dir/PersonalCare/PersonalCare.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/PersonalCare/PersonalCare.cpp.o -MF CMakeFiles/project1.dir/PersonalCare/PersonalCare.cpp.o.d -o CMakeFiles/project1.dir/PersonalCare/PersonalCare.cpp.o -c /mnt/d/OOP_labs/project1/PersonalCare/PersonalCare.cpp

CMakeFiles/project1.dir/PersonalCare/PersonalCare.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/PersonalCare/PersonalCare.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/OOP_labs/project1/PersonalCare/PersonalCare.cpp > CMakeFiles/project1.dir/PersonalCare/PersonalCare.cpp.i

CMakeFiles/project1.dir/PersonalCare/PersonalCare.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/PersonalCare/PersonalCare.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/OOP_labs/project1/PersonalCare/PersonalCare.cpp -o CMakeFiles/project1.dir/PersonalCare/PersonalCare.cpp.s

CMakeFiles/project1.dir/Electronics/Electronics.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Electronics/Electronics.cpp.o: ../Electronics/Electronics.cpp
CMakeFiles/project1.dir/Electronics/Electronics.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/project1.dir/Electronics/Electronics.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/Electronics/Electronics.cpp.o -MF CMakeFiles/project1.dir/Electronics/Electronics.cpp.o.d -o CMakeFiles/project1.dir/Electronics/Electronics.cpp.o -c /mnt/d/OOP_labs/project1/Electronics/Electronics.cpp

CMakeFiles/project1.dir/Electronics/Electronics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Electronics/Electronics.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/OOP_labs/project1/Electronics/Electronics.cpp > CMakeFiles/project1.dir/Electronics/Electronics.cpp.i

CMakeFiles/project1.dir/Electronics/Electronics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Electronics/Electronics.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/OOP_labs/project1/Electronics/Electronics.cpp -o CMakeFiles/project1.dir/Electronics/Electronics.cpp.s

CMakeFiles/project1.dir/UI/Menu.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/UI/Menu.cpp.o: ../UI/Menu.cpp
CMakeFiles/project1.dir/UI/Menu.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/project1.dir/UI/Menu.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/UI/Menu.cpp.o -MF CMakeFiles/project1.dir/UI/Menu.cpp.o.d -o CMakeFiles/project1.dir/UI/Menu.cpp.o -c /mnt/d/OOP_labs/project1/UI/Menu.cpp

CMakeFiles/project1.dir/UI/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/UI/Menu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/OOP_labs/project1/UI/Menu.cpp > CMakeFiles/project1.dir/UI/Menu.cpp.i

CMakeFiles/project1.dir/UI/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/UI/Menu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/OOP_labs/project1/UI/Menu.cpp -o CMakeFiles/project1.dir/UI/Menu.cpp.s

CMakeFiles/project1.dir/Exception/InvalidInputException.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Exception/InvalidInputException.cpp.o: ../Exception/InvalidInputException.cpp
CMakeFiles/project1.dir/Exception/InvalidInputException.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/project1.dir/Exception/InvalidInputException.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/Exception/InvalidInputException.cpp.o -MF CMakeFiles/project1.dir/Exception/InvalidInputException.cpp.o.d -o CMakeFiles/project1.dir/Exception/InvalidInputException.cpp.o -c /mnt/d/OOP_labs/project1/Exception/InvalidInputException.cpp

CMakeFiles/project1.dir/Exception/InvalidInputException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Exception/InvalidInputException.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/OOP_labs/project1/Exception/InvalidInputException.cpp > CMakeFiles/project1.dir/Exception/InvalidInputException.cpp.i

CMakeFiles/project1.dir/Exception/InvalidInputException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Exception/InvalidInputException.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/OOP_labs/project1/Exception/InvalidInputException.cpp -o CMakeFiles/project1.dir/Exception/InvalidInputException.cpp.s

CMakeFiles/project1.dir/Exception/InvalidBarcodeException.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Exception/InvalidBarcodeException.cpp.o: ../Exception/InvalidBarcodeException.cpp
CMakeFiles/project1.dir/Exception/InvalidBarcodeException.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/project1.dir/Exception/InvalidBarcodeException.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/Exception/InvalidBarcodeException.cpp.o -MF CMakeFiles/project1.dir/Exception/InvalidBarcodeException.cpp.o.d -o CMakeFiles/project1.dir/Exception/InvalidBarcodeException.cpp.o -c /mnt/d/OOP_labs/project1/Exception/InvalidBarcodeException.cpp

CMakeFiles/project1.dir/Exception/InvalidBarcodeException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Exception/InvalidBarcodeException.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/OOP_labs/project1/Exception/InvalidBarcodeException.cpp > CMakeFiles/project1.dir/Exception/InvalidBarcodeException.cpp.i

CMakeFiles/project1.dir/Exception/InvalidBarcodeException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Exception/InvalidBarcodeException.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/OOP_labs/project1/Exception/InvalidBarcodeException.cpp -o CMakeFiles/project1.dir/Exception/InvalidBarcodeException.cpp.s

CMakeFiles/project1.dir/Exception/InvalidQuantityException.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Exception/InvalidQuantityException.cpp.o: ../Exception/InvalidQuantityException.cpp
CMakeFiles/project1.dir/Exception/InvalidQuantityException.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/project1.dir/Exception/InvalidQuantityException.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/Exception/InvalidQuantityException.cpp.o -MF CMakeFiles/project1.dir/Exception/InvalidQuantityException.cpp.o.d -o CMakeFiles/project1.dir/Exception/InvalidQuantityException.cpp.o -c /mnt/d/OOP_labs/project1/Exception/InvalidQuantityException.cpp

CMakeFiles/project1.dir/Exception/InvalidQuantityException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Exception/InvalidQuantityException.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/OOP_labs/project1/Exception/InvalidQuantityException.cpp > CMakeFiles/project1.dir/Exception/InvalidQuantityException.cpp.i

CMakeFiles/project1.dir/Exception/InvalidQuantityException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Exception/InvalidQuantityException.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/OOP_labs/project1/Exception/InvalidQuantityException.cpp -o CMakeFiles/project1.dir/Exception/InvalidQuantityException.cpp.s

CMakeFiles/project1.dir/Utilty/Uitlity.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Utilty/Uitlity.cpp.o: ../Utilty/Uitlity.cpp
CMakeFiles/project1.dir/Utilty/Uitlity.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/project1.dir/Utilty/Uitlity.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/Utilty/Uitlity.cpp.o -MF CMakeFiles/project1.dir/Utilty/Uitlity.cpp.o.d -o CMakeFiles/project1.dir/Utilty/Uitlity.cpp.o -c /mnt/d/OOP_labs/project1/Utilty/Uitlity.cpp

CMakeFiles/project1.dir/Utilty/Uitlity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Utilty/Uitlity.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/OOP_labs/project1/Utilty/Uitlity.cpp > CMakeFiles/project1.dir/Utilty/Uitlity.cpp.i

CMakeFiles/project1.dir/Utilty/Uitlity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Utilty/Uitlity.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/OOP_labs/project1/Utilty/Uitlity.cpp -o CMakeFiles/project1.dir/Utilty/Uitlity.cpp.s

CMakeFiles/project1.dir/Exception/InvalidDateException.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Exception/InvalidDateException.cpp.o: ../Exception/InvalidDateException.cpp
CMakeFiles/project1.dir/Exception/InvalidDateException.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/project1.dir/Exception/InvalidDateException.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/Exception/InvalidDateException.cpp.o -MF CMakeFiles/project1.dir/Exception/InvalidDateException.cpp.o.d -o CMakeFiles/project1.dir/Exception/InvalidDateException.cpp.o -c /mnt/d/OOP_labs/project1/Exception/InvalidDateException.cpp

CMakeFiles/project1.dir/Exception/InvalidDateException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Exception/InvalidDateException.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/OOP_labs/project1/Exception/InvalidDateException.cpp > CMakeFiles/project1.dir/Exception/InvalidDateException.cpp.i

CMakeFiles/project1.dir/Exception/InvalidDateException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Exception/InvalidDateException.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/OOP_labs/project1/Exception/InvalidDateException.cpp -o CMakeFiles/project1.dir/Exception/InvalidDateException.cpp.s

# Object files for target project1
project1_OBJECTS = \
"CMakeFiles/project1.dir/main.cpp.o" \
"CMakeFiles/project1.dir/Controller/Controller.cpp.o" \
"CMakeFiles/project1.dir/Domain/Product.cpp.o" \
"CMakeFiles/project1.dir/Repository/ProductRepo.cpp.o" \
"CMakeFiles/project1.dir/UI/UI.cpp.o" \
"CMakeFiles/project1.dir/Exception/IdenticException.cpp.o" \
"CMakeFiles/project1.dir/Exception/NoElementException.cpp.o" \
"CMakeFiles/project1.dir/Groceries/Groceries.cpp.o" \
"CMakeFiles/project1.dir/PersonalCare/PersonalCare.cpp.o" \
"CMakeFiles/project1.dir/Electronics/Electronics.cpp.o" \
"CMakeFiles/project1.dir/UI/Menu.cpp.o" \
"CMakeFiles/project1.dir/Exception/InvalidInputException.cpp.o" \
"CMakeFiles/project1.dir/Exception/InvalidBarcodeException.cpp.o" \
"CMakeFiles/project1.dir/Exception/InvalidQuantityException.cpp.o" \
"CMakeFiles/project1.dir/Utilty/Uitlity.cpp.o" \
"CMakeFiles/project1.dir/Exception/InvalidDateException.cpp.o"

# External object files for target project1
project1_EXTERNAL_OBJECTS =

project1: CMakeFiles/project1.dir/main.cpp.o
project1: CMakeFiles/project1.dir/Controller/Controller.cpp.o
project1: CMakeFiles/project1.dir/Domain/Product.cpp.o
project1: CMakeFiles/project1.dir/Repository/ProductRepo.cpp.o
project1: CMakeFiles/project1.dir/UI/UI.cpp.o
project1: CMakeFiles/project1.dir/Exception/IdenticException.cpp.o
project1: CMakeFiles/project1.dir/Exception/NoElementException.cpp.o
project1: CMakeFiles/project1.dir/Groceries/Groceries.cpp.o
project1: CMakeFiles/project1.dir/PersonalCare/PersonalCare.cpp.o
project1: CMakeFiles/project1.dir/Electronics/Electronics.cpp.o
project1: CMakeFiles/project1.dir/UI/Menu.cpp.o
project1: CMakeFiles/project1.dir/Exception/InvalidInputException.cpp.o
project1: CMakeFiles/project1.dir/Exception/InvalidBarcodeException.cpp.o
project1: CMakeFiles/project1.dir/Exception/InvalidQuantityException.cpp.o
project1: CMakeFiles/project1.dir/Utilty/Uitlity.cpp.o
project1: CMakeFiles/project1.dir/Exception/InvalidDateException.cpp.o
project1: CMakeFiles/project1.dir/build.make
project1: CMakeFiles/project1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/OOP_labs/project1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX executable project1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project1.dir/build: project1
.PHONY : CMakeFiles/project1.dir/build

CMakeFiles/project1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project1.dir/clean

CMakeFiles/project1.dir/depend:
	cd /mnt/d/OOP_labs/project1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/OOP_labs/project1 /mnt/d/OOP_labs/project1 /mnt/d/OOP_labs/project1/build /mnt/d/OOP_labs/project1/build /mnt/d/OOP_labs/project1/build/CMakeFiles/project1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project1.dir/depend

