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
CMAKE_COMMAND = /home/avocadick/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.7223.86/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/avocadick/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.7223.86/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/avocadick/CLionProjects/leetcode/problems/768_MaxChunksToMakeSortedII

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/avocadick/CLionProjects/leetcode/problems/768_MaxChunksToMakeSortedII/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/768_MaxChunksToMakeSortedII.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/768_MaxChunksToMakeSortedII.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/768_MaxChunksToMakeSortedII.dir/flags.make

CMakeFiles/768_MaxChunksToMakeSortedII.dir/main.cpp.o: CMakeFiles/768_MaxChunksToMakeSortedII.dir/flags.make
CMakeFiles/768_MaxChunksToMakeSortedII.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/avocadick/CLionProjects/leetcode/problems/768_MaxChunksToMakeSortedII/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/768_MaxChunksToMakeSortedII.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/768_MaxChunksToMakeSortedII.dir/main.cpp.o -c /home/avocadick/CLionProjects/leetcode/problems/768_MaxChunksToMakeSortedII/main.cpp

CMakeFiles/768_MaxChunksToMakeSortedII.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/768_MaxChunksToMakeSortedII.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/avocadick/CLionProjects/leetcode/problems/768_MaxChunksToMakeSortedII/main.cpp > CMakeFiles/768_MaxChunksToMakeSortedII.dir/main.cpp.i

CMakeFiles/768_MaxChunksToMakeSortedII.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/768_MaxChunksToMakeSortedII.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/avocadick/CLionProjects/leetcode/problems/768_MaxChunksToMakeSortedII/main.cpp -o CMakeFiles/768_MaxChunksToMakeSortedII.dir/main.cpp.s

# Object files for target 768_MaxChunksToMakeSortedII
768_MaxChunksToMakeSortedII_OBJECTS = \
"CMakeFiles/768_MaxChunksToMakeSortedII.dir/main.cpp.o"

# External object files for target 768_MaxChunksToMakeSortedII
768_MaxChunksToMakeSortedII_EXTERNAL_OBJECTS =

768_MaxChunksToMakeSortedII: CMakeFiles/768_MaxChunksToMakeSortedII.dir/main.cpp.o
768_MaxChunksToMakeSortedII: CMakeFiles/768_MaxChunksToMakeSortedII.dir/build.make
768_MaxChunksToMakeSortedII: CMakeFiles/768_MaxChunksToMakeSortedII.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/avocadick/CLionProjects/leetcode/problems/768_MaxChunksToMakeSortedII/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 768_MaxChunksToMakeSortedII"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/768_MaxChunksToMakeSortedII.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/768_MaxChunksToMakeSortedII.dir/build: 768_MaxChunksToMakeSortedII

.PHONY : CMakeFiles/768_MaxChunksToMakeSortedII.dir/build

CMakeFiles/768_MaxChunksToMakeSortedII.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/768_MaxChunksToMakeSortedII.dir/cmake_clean.cmake
.PHONY : CMakeFiles/768_MaxChunksToMakeSortedII.dir/clean

CMakeFiles/768_MaxChunksToMakeSortedII.dir/depend:
	cd /home/avocadick/CLionProjects/leetcode/problems/768_MaxChunksToMakeSortedII/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/avocadick/CLionProjects/leetcode/problems/768_MaxChunksToMakeSortedII /home/avocadick/CLionProjects/leetcode/problems/768_MaxChunksToMakeSortedII /home/avocadick/CLionProjects/leetcode/problems/768_MaxChunksToMakeSortedII/cmake-build-debug /home/avocadick/CLionProjects/leetcode/problems/768_MaxChunksToMakeSortedII/cmake-build-debug /home/avocadick/CLionProjects/leetcode/problems/768_MaxChunksToMakeSortedII/cmake-build-debug/CMakeFiles/768_MaxChunksToMakeSortedII.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/768_MaxChunksToMakeSortedII.dir/depend

