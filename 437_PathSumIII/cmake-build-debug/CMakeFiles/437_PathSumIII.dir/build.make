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
CMAKE_SOURCE_DIR = /home/avocadick/CLionProjects/leetcode/problems/437_PathSumIII

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/avocadick/CLionProjects/leetcode/problems/437_PathSumIII/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/437_PathSumIII.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/437_PathSumIII.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/437_PathSumIII.dir/flags.make

CMakeFiles/437_PathSumIII.dir/main.cpp.o: CMakeFiles/437_PathSumIII.dir/flags.make
CMakeFiles/437_PathSumIII.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/avocadick/CLionProjects/leetcode/problems/437_PathSumIII/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/437_PathSumIII.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/437_PathSumIII.dir/main.cpp.o -c /home/avocadick/CLionProjects/leetcode/problems/437_PathSumIII/main.cpp

CMakeFiles/437_PathSumIII.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/437_PathSumIII.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/avocadick/CLionProjects/leetcode/problems/437_PathSumIII/main.cpp > CMakeFiles/437_PathSumIII.dir/main.cpp.i

CMakeFiles/437_PathSumIII.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/437_PathSumIII.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/avocadick/CLionProjects/leetcode/problems/437_PathSumIII/main.cpp -o CMakeFiles/437_PathSumIII.dir/main.cpp.s

# Object files for target 437_PathSumIII
437_PathSumIII_OBJECTS = \
"CMakeFiles/437_PathSumIII.dir/main.cpp.o"

# External object files for target 437_PathSumIII
437_PathSumIII_EXTERNAL_OBJECTS =

437_PathSumIII: CMakeFiles/437_PathSumIII.dir/main.cpp.o
437_PathSumIII: CMakeFiles/437_PathSumIII.dir/build.make
437_PathSumIII: CMakeFiles/437_PathSumIII.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/avocadick/CLionProjects/leetcode/problems/437_PathSumIII/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 437_PathSumIII"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/437_PathSumIII.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/437_PathSumIII.dir/build: 437_PathSumIII

.PHONY : CMakeFiles/437_PathSumIII.dir/build

CMakeFiles/437_PathSumIII.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/437_PathSumIII.dir/cmake_clean.cmake
.PHONY : CMakeFiles/437_PathSumIII.dir/clean

CMakeFiles/437_PathSumIII.dir/depend:
	cd /home/avocadick/CLionProjects/leetcode/problems/437_PathSumIII/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/avocadick/CLionProjects/leetcode/problems/437_PathSumIII /home/avocadick/CLionProjects/leetcode/problems/437_PathSumIII /home/avocadick/CLionProjects/leetcode/problems/437_PathSumIII/cmake-build-debug /home/avocadick/CLionProjects/leetcode/problems/437_PathSumIII/cmake-build-debug /home/avocadick/CLionProjects/leetcode/problems/437_PathSumIII/cmake-build-debug/CMakeFiles/437_PathSumIII.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/437_PathSumIII.dir/depend
