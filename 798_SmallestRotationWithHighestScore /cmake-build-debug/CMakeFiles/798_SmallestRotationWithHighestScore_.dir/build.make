# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /home/avocadick/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.8743.17/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/avocadick/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.8743.17/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/avocadick/CLionProjects/leetcode/problems/798_SmallestRotationWithHighestScore "

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/avocadick/CLionProjects/leetcode/problems/798_SmallestRotationWithHighestScore /cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/798_SmallestRotationWithHighestScore_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/798_SmallestRotationWithHighestScore_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/798_SmallestRotationWithHighestScore_.dir/flags.make

CMakeFiles/798_SmallestRotationWithHighestScore_.dir/main.cpp.o: CMakeFiles/798_SmallestRotationWithHighestScore_.dir/flags.make
CMakeFiles/798_SmallestRotationWithHighestScore_.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/avocadick/CLionProjects/leetcode/problems/798_SmallestRotationWithHighestScore /cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/798_SmallestRotationWithHighestScore_.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/798_SmallestRotationWithHighestScore_.dir/main.cpp.o -c "/home/avocadick/CLionProjects/leetcode/problems/798_SmallestRotationWithHighestScore /main.cpp"

CMakeFiles/798_SmallestRotationWithHighestScore_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/798_SmallestRotationWithHighestScore_.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/avocadick/CLionProjects/leetcode/problems/798_SmallestRotationWithHighestScore /main.cpp" > CMakeFiles/798_SmallestRotationWithHighestScore_.dir/main.cpp.i

CMakeFiles/798_SmallestRotationWithHighestScore_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/798_SmallestRotationWithHighestScore_.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/avocadick/CLionProjects/leetcode/problems/798_SmallestRotationWithHighestScore /main.cpp" -o CMakeFiles/798_SmallestRotationWithHighestScore_.dir/main.cpp.s

# Object files for target 798_SmallestRotationWithHighestScore_
798_SmallestRotationWithHighestScore__OBJECTS = \
"CMakeFiles/798_SmallestRotationWithHighestScore_.dir/main.cpp.o"

# External object files for target 798_SmallestRotationWithHighestScore_
798_SmallestRotationWithHighestScore__EXTERNAL_OBJECTS =

798_SmallestRotationWithHighestScore_: CMakeFiles/798_SmallestRotationWithHighestScore_.dir/main.cpp.o
798_SmallestRotationWithHighestScore_: CMakeFiles/798_SmallestRotationWithHighestScore_.dir/build.make
798_SmallestRotationWithHighestScore_: CMakeFiles/798_SmallestRotationWithHighestScore_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/avocadick/CLionProjects/leetcode/problems/798_SmallestRotationWithHighestScore /cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 798_SmallestRotationWithHighestScore_"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/798_SmallestRotationWithHighestScore_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/798_SmallestRotationWithHighestScore_.dir/build: 798_SmallestRotationWithHighestScore_

.PHONY : CMakeFiles/798_SmallestRotationWithHighestScore_.dir/build

CMakeFiles/798_SmallestRotationWithHighestScore_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/798_SmallestRotationWithHighestScore_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/798_SmallestRotationWithHighestScore_.dir/clean

CMakeFiles/798_SmallestRotationWithHighestScore_.dir/depend:
	cd "/home/avocadick/CLionProjects/leetcode/problems/798_SmallestRotationWithHighestScore /cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/avocadick/CLionProjects/leetcode/problems/798_SmallestRotationWithHighestScore " "/home/avocadick/CLionProjects/leetcode/problems/798_SmallestRotationWithHighestScore " "/home/avocadick/CLionProjects/leetcode/problems/798_SmallestRotationWithHighestScore /cmake-build-debug" "/home/avocadick/CLionProjects/leetcode/problems/798_SmallestRotationWithHighestScore /cmake-build-debug" "/home/avocadick/CLionProjects/leetcode/problems/798_SmallestRotationWithHighestScore /cmake-build-debug/CMakeFiles/798_SmallestRotationWithHighestScore_.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/798_SmallestRotationWithHighestScore_.dir/depend

