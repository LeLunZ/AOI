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
CMAKE_SOURCE_DIR = /Users/luis/Documents/AOI/contest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/luis/Documents/AOI/contest/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/contest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/contest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/contest.dir/flags.make

CMakeFiles/contest.dir/test2.cpp.o: CMakeFiles/contest.dir/flags.make
CMakeFiles/contest.dir/test2.cpp.o: ../test2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/luis/Documents/AOI/contest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/contest.dir/test2.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/contest.dir/test2.cpp.o -c /Users/luis/Documents/AOI/contest/test2.cpp

CMakeFiles/contest.dir/test2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/contest.dir/test2.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/luis/Documents/AOI/contest/test2.cpp > CMakeFiles/contest.dir/test2.cpp.i

CMakeFiles/contest.dir/test2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/contest.dir/test2.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/luis/Documents/AOI/contest/test2.cpp -o CMakeFiles/contest.dir/test2.cpp.s

# Object files for target contest
contest_OBJECTS = \
"CMakeFiles/contest.dir/test2.cpp.o"

# External object files for target contest
contest_EXTERNAL_OBJECTS =

contest: CMakeFiles/contest.dir/test2.cpp.o
contest: CMakeFiles/contest.dir/build.make
contest: CMakeFiles/contest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/luis/Documents/AOI/contest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable contest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/contest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/contest.dir/build: contest

.PHONY : CMakeFiles/contest.dir/build

CMakeFiles/contest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/contest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/contest.dir/clean

CMakeFiles/contest.dir/depend:
	cd /Users/luis/Documents/AOI/contest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/luis/Documents/AOI/contest /Users/luis/Documents/AOI/contest /Users/luis/Documents/AOI/contest/cmake-build-debug /Users/luis/Documents/AOI/contest/cmake-build-debug /Users/luis/Documents/AOI/contest/cmake-build-debug/CMakeFiles/contest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/contest.dir/depend

