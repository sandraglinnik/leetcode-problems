# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/avocadick/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.6397.106/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/avocadick/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.6397.106/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/avocadick/CLionProjects/leetcode/problems/99_RecoverBinarySearchTree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/avocadick/CLionProjects/leetcode/problems/99_RecoverBinarySearchTree/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/99_RecoverBinarySearchTree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/99_RecoverBinarySearchTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/99_RecoverBinarySearchTree.dir/flags.make

CMakeFiles/99_RecoverBinarySearchTree.dir/main.cpp.o: CMakeFiles/99_RecoverBinarySearchTree.dir/flags.make
CMakeFiles/99_RecoverBinarySearchTree.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/avocadick/CLionProjects/leetcode/problems/99_RecoverBinarySearchTree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/99_RecoverBinarySearchTree.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/99_RecoverBinarySearchTree.dir/main.cpp.o -c /home/avocadick/CLionProjects/leetcode/problems/99_RecoverBinarySearchTree/main.cpp

CMakeFiles/99_RecoverBinarySearchTree.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/99_RecoverBinarySearchTree.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/avocadick/CLionProjects/leetcode/problems/99_RecoverBinarySearchTree/main.cpp > CMakeFiles/99_RecoverBinarySearchTree.dir/main.cpp.i

CMakeFiles/99_RecoverBinarySearchTree.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/99_RecoverBinarySearchTree.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/avocadick/CLionProjects/leetcode/problems/99_RecoverBinarySearchTree/main.cpp -o CMakeFiles/99_RecoverBinarySearchTree.dir/main.cpp.s

# Object files for target 99_RecoverBinarySearchTree
99_RecoverBinarySearchTree_OBJECTS = \
"CMakeFiles/99_RecoverBinarySearchTree.dir/main.cpp.o"

# External object files for target 99_RecoverBinarySearchTree
99_RecoverBinarySearchTree_EXTERNAL_OBJECTS =

99_RecoverBinarySearchTree: CMakeFiles/99_RecoverBinarySearchTree.dir/main.cpp.o
99_RecoverBinarySearchTree: CMakeFiles/99_RecoverBinarySearchTree.dir/build.make
99_RecoverBinarySearchTree: CMakeFiles/99_RecoverBinarySearchTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/avocadick/CLionProjects/leetcode/problems/99_RecoverBinarySearchTree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 99_RecoverBinarySearchTree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/99_RecoverBinarySearchTree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/99_RecoverBinarySearchTree.dir/build: 99_RecoverBinarySearchTree

.PHONY : CMakeFiles/99_RecoverBinarySearchTree.dir/build

CMakeFiles/99_RecoverBinarySearchTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/99_RecoverBinarySearchTree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/99_RecoverBinarySearchTree.dir/clean

CMakeFiles/99_RecoverBinarySearchTree.dir/depend:
	cd /home/avocadick/CLionProjects/leetcode/problems/99_RecoverBinarySearchTree/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/avocadick/CLionProjects/leetcode/problems/99_RecoverBinarySearchTree /home/avocadick/CLionProjects/leetcode/problems/99_RecoverBinarySearchTree /home/avocadick/CLionProjects/leetcode/problems/99_RecoverBinarySearchTree/cmake-build-debug /home/avocadick/CLionProjects/leetcode/problems/99_RecoverBinarySearchTree/cmake-build-debug /home/avocadick/CLionProjects/leetcode/problems/99_RecoverBinarySearchTree/cmake-build-debug/CMakeFiles/99_RecoverBinarySearchTree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/99_RecoverBinarySearchTree.dir/depend

