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
CMAKE_SOURCE_DIR = /home/avocadick/CLionProjects/leetcode/problems/815_BusRoutes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/avocadick/CLionProjects/leetcode/problems/815_BusRoutes/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/815_BusRoutes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/815_BusRoutes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/815_BusRoutes.dir/flags.make

CMakeFiles/815_BusRoutes.dir/main.cpp.o: CMakeFiles/815_BusRoutes.dir/flags.make
CMakeFiles/815_BusRoutes.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/avocadick/CLionProjects/leetcode/problems/815_BusRoutes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/815_BusRoutes.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/815_BusRoutes.dir/main.cpp.o -c /home/avocadick/CLionProjects/leetcode/problems/815_BusRoutes/main.cpp

CMakeFiles/815_BusRoutes.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/815_BusRoutes.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/avocadick/CLionProjects/leetcode/problems/815_BusRoutes/main.cpp > CMakeFiles/815_BusRoutes.dir/main.cpp.i

CMakeFiles/815_BusRoutes.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/815_BusRoutes.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/avocadick/CLionProjects/leetcode/problems/815_BusRoutes/main.cpp -o CMakeFiles/815_BusRoutes.dir/main.cpp.s

# Object files for target 815_BusRoutes
815_BusRoutes_OBJECTS = \
"CMakeFiles/815_BusRoutes.dir/main.cpp.o"

# External object files for target 815_BusRoutes
815_BusRoutes_EXTERNAL_OBJECTS =

815_BusRoutes: CMakeFiles/815_BusRoutes.dir/main.cpp.o
815_BusRoutes: CMakeFiles/815_BusRoutes.dir/build.make
815_BusRoutes: CMakeFiles/815_BusRoutes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/avocadick/CLionProjects/leetcode/problems/815_BusRoutes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 815_BusRoutes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/815_BusRoutes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/815_BusRoutes.dir/build: 815_BusRoutes

.PHONY : CMakeFiles/815_BusRoutes.dir/build

CMakeFiles/815_BusRoutes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/815_BusRoutes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/815_BusRoutes.dir/clean

CMakeFiles/815_BusRoutes.dir/depend:
	cd /home/avocadick/CLionProjects/leetcode/problems/815_BusRoutes/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/avocadick/CLionProjects/leetcode/problems/815_BusRoutes /home/avocadick/CLionProjects/leetcode/problems/815_BusRoutes /home/avocadick/CLionProjects/leetcode/problems/815_BusRoutes/cmake-build-debug /home/avocadick/CLionProjects/leetcode/problems/815_BusRoutes/cmake-build-debug /home/avocadick/CLionProjects/leetcode/problems/815_BusRoutes/cmake-build-debug/CMakeFiles/815_BusRoutes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/815_BusRoutes.dir/depend
