# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = "/Users/luis/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/luis/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/luis/Documents/AOI/algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/luis/Documents/AOI/algorithms/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/algorithms.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/algorithms.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/algorithms.dir/flags.make

CMakeFiles/algorithms.dir/main.cpp.o: CMakeFiles/algorithms.dir/flags.make
CMakeFiles/algorithms.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/luis/Documents/AOI/algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/algorithms.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/algorithms.dir/main.cpp.o -c /Users/luis/Documents/AOI/algorithms/main.cpp

CMakeFiles/algorithms.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/algorithms.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/luis/Documents/AOI/algorithms/main.cpp > CMakeFiles/algorithms.dir/main.cpp.i

CMakeFiles/algorithms.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/algorithms.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/luis/Documents/AOI/algorithms/main.cpp -o CMakeFiles/algorithms.dir/main.cpp.s

CMakeFiles/algorithms.dir/dijkstra.cpp.o: CMakeFiles/algorithms.dir/flags.make
CMakeFiles/algorithms.dir/dijkstra.cpp.o: ../dijkstra.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/luis/Documents/AOI/algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/algorithms.dir/dijkstra.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/algorithms.dir/dijkstra.cpp.o -c /Users/luis/Documents/AOI/algorithms/dijkstra.cpp

CMakeFiles/algorithms.dir/dijkstra.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/algorithms.dir/dijkstra.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/luis/Documents/AOI/algorithms/dijkstra.cpp > CMakeFiles/algorithms.dir/dijkstra.cpp.i

CMakeFiles/algorithms.dir/dijkstra.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/algorithms.dir/dijkstra.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/luis/Documents/AOI/algorithms/dijkstra.cpp -o CMakeFiles/algorithms.dir/dijkstra.cpp.s

# Object files for target algorithms
algorithms_OBJECTS = \
"CMakeFiles/algorithms.dir/main.cpp.o" \
"CMakeFiles/algorithms.dir/dijkstra.cpp.o"

# External object files for target algorithms
algorithms_EXTERNAL_OBJECTS =

algorithms: CMakeFiles/algorithms.dir/main.cpp.o
algorithms: CMakeFiles/algorithms.dir/dijkstra.cpp.o
algorithms: CMakeFiles/algorithms.dir/build.make
algorithms: CMakeFiles/algorithms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/luis/Documents/AOI/algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable algorithms"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/algorithms.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/algorithms.dir/build: algorithms

.PHONY : CMakeFiles/algorithms.dir/build

CMakeFiles/algorithms.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/algorithms.dir/cmake_clean.cmake
.PHONY : CMakeFiles/algorithms.dir/clean

CMakeFiles/algorithms.dir/depend:
	cd /Users/luis/Documents/AOI/algorithms/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/luis/Documents/AOI/algorithms /Users/luis/Documents/AOI/algorithms /Users/luis/Documents/AOI/algorithms/cmake-build-debug /Users/luis/Documents/AOI/algorithms/cmake-build-debug /Users/luis/Documents/AOI/algorithms/cmake-build-debug/CMakeFiles/algorithms.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/algorithms.dir/depend

