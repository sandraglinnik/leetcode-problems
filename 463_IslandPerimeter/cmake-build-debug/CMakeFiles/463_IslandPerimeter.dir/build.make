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
CMAKE_COMMAND = /home/avocadick/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.7846.88/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/avocadick/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.7846.88/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/avocadick/CLionProjects/leetcode/problems/463_IslandPerimeter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/avocadick/CLionProjects/leetcode/problems/463_IslandPerimeter/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/463_IslandPerimeter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/463_IslandPerimeter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/463_IslandPerimeter.dir/flags.make

CMakeFiles/463_IslandPerimeter.dir/main.cpp.o: CMakeFiles/463_IslandPerimeter.dir/flags.make
CMakeFiles/463_IslandPerimeter.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/avocadick/CLionProjects/leetcode/problems/463_IslandPerimeter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/463_IslandPerimeter.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/463_IslandPerimeter.dir/main.cpp.o -c /home/avocadick/CLionProjects/leetcode/problems/463_IslandPerimeter/main.cpp

CMakeFiles/463_IslandPerimeter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/463_IslandPerimeter.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/avocadick/CLionProjects/leetcode/problems/463_IslandPerimeter/main.cpp > CMakeFiles/463_IslandPerimeter.dir/main.cpp.i

CMakeFiles/463_IslandPerimeter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/463_IslandPerimeter.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/avocadick/CLionProjects/leetcode/problems/463_IslandPerimeter/main.cpp -o CMakeFiles/463_IslandPerimeter.dir/main.cpp.s

# Object files for target 463_IslandPerimeter
463_IslandPerimeter_OBJECTS = \
"CMakeFiles/463_IslandPerimeter.dir/main.cpp.o"

# External object files for target 463_IslandPerimeter
463_IslandPerimeter_EXTERNAL_OBJECTS =

463_IslandPerimeter: CMakeFiles/463_IslandPerimeter.dir/main.cpp.o
463_IslandPerimeter: CMakeFiles/463_IslandPerimeter.dir/build.make
463_IslandPerimeter: CMakeFiles/463_IslandPerimeter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/avocadick/CLionProjects/leetcode/problems/463_IslandPerimeter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 463_IslandPerimeter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/463_IslandPerimeter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/463_IslandPerimeter.dir/build: 463_IslandPerimeter

.PHONY : CMakeFiles/463_IslandPerimeter.dir/build

CMakeFiles/463_IslandPerimeter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/463_IslandPerimeter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/463_IslandPerimeter.dir/clean

CMakeFiles/463_IslandPerimeter.dir/depend:
	cd /home/avocadick/CLionProjects/leetcode/problems/463_IslandPerimeter/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/avocadick/CLionProjects/leetcode/problems/463_IslandPerimeter /home/avocadick/CLionProjects/leetcode/problems/463_IslandPerimeter /home/avocadick/CLionProjects/leetcode/problems/463_IslandPerimeter/cmake-build-debug /home/avocadick/CLionProjects/leetcode/problems/463_IslandPerimeter/cmake-build-debug /home/avocadick/CLionProjects/leetcode/problems/463_IslandPerimeter/cmake-build-debug/CMakeFiles/463_IslandPerimeter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/463_IslandPerimeter.dir/depend

