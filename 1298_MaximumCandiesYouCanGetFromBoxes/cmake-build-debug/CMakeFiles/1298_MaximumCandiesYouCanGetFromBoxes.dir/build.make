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
CMAKE_SOURCE_DIR = /home/avocadick/CLionProjects/leetcode/problems/1298_MaximumCandiesYouCanGetFromBoxes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/avocadick/CLionProjects/leetcode/problems/1298_MaximumCandiesYouCanGetFromBoxes/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/flags.make

CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/main.cpp.o: CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/flags.make
CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/avocadick/CLionProjects/leetcode/problems/1298_MaximumCandiesYouCanGetFromBoxes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/main.cpp.o -c /home/avocadick/CLionProjects/leetcode/problems/1298_MaximumCandiesYouCanGetFromBoxes/main.cpp

CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/avocadick/CLionProjects/leetcode/problems/1298_MaximumCandiesYouCanGetFromBoxes/main.cpp > CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/main.cpp.i

CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/avocadick/CLionProjects/leetcode/problems/1298_MaximumCandiesYouCanGetFromBoxes/main.cpp -o CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/main.cpp.s

# Object files for target 1298_MaximumCandiesYouCanGetFromBoxes
1298_MaximumCandiesYouCanGetFromBoxes_OBJECTS = \
"CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/main.cpp.o"

# External object files for target 1298_MaximumCandiesYouCanGetFromBoxes
1298_MaximumCandiesYouCanGetFromBoxes_EXTERNAL_OBJECTS =

1298_MaximumCandiesYouCanGetFromBoxes: CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/main.cpp.o
1298_MaximumCandiesYouCanGetFromBoxes: CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/build.make
1298_MaximumCandiesYouCanGetFromBoxes: CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/avocadick/CLionProjects/leetcode/problems/1298_MaximumCandiesYouCanGetFromBoxes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1298_MaximumCandiesYouCanGetFromBoxes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/build: 1298_MaximumCandiesYouCanGetFromBoxes

.PHONY : CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/build

CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/clean

CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/depend:
	cd /home/avocadick/CLionProjects/leetcode/problems/1298_MaximumCandiesYouCanGetFromBoxes/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/avocadick/CLionProjects/leetcode/problems/1298_MaximumCandiesYouCanGetFromBoxes /home/avocadick/CLionProjects/leetcode/problems/1298_MaximumCandiesYouCanGetFromBoxes /home/avocadick/CLionProjects/leetcode/problems/1298_MaximumCandiesYouCanGetFromBoxes/cmake-build-debug /home/avocadick/CLionProjects/leetcode/problems/1298_MaximumCandiesYouCanGetFromBoxes/cmake-build-debug /home/avocadick/CLionProjects/leetcode/problems/1298_MaximumCandiesYouCanGetFromBoxes/cmake-build-debug/CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1298_MaximumCandiesYouCanGetFromBoxes.dir/depend

