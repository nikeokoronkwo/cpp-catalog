# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /opt/local/bin/cmake

# The command to remove a file.
RM = /opt/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nikechukwu/Desktop/projects/c++-catalog/simple-projects/simple-calc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nikechukwu/Desktop/projects/c++-catalog/simple-projects/simple-calc/build

# Include any dependencies generated for this target.
include CMakeFiles/simple-calc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/simple-calc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/simple-calc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simple-calc.dir/flags.make

CMakeFiles/simple-calc.dir/main.cc.o: CMakeFiles/simple-calc.dir/flags.make
CMakeFiles/simple-calc.dir/main.cc.o: /Users/nikechukwu/Desktop/projects/c++-catalog/simple-projects/simple-calc/main.cc
CMakeFiles/simple-calc.dir/main.cc.o: CMakeFiles/simple-calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikechukwu/Desktop/projects/c++-catalog/simple-projects/simple-calc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simple-calc.dir/main.cc.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simple-calc.dir/main.cc.o -MF CMakeFiles/simple-calc.dir/main.cc.o.d -o CMakeFiles/simple-calc.dir/main.cc.o -c /Users/nikechukwu/Desktop/projects/c++-catalog/simple-projects/simple-calc/main.cc

CMakeFiles/simple-calc.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple-calc.dir/main.cc.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikechukwu/Desktop/projects/c++-catalog/simple-projects/simple-calc/main.cc > CMakeFiles/simple-calc.dir/main.cc.i

CMakeFiles/simple-calc.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple-calc.dir/main.cc.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikechukwu/Desktop/projects/c++-catalog/simple-projects/simple-calc/main.cc -o CMakeFiles/simple-calc.dir/main.cc.s

# Object files for target simple-calc
simple__calc_OBJECTS = \
"CMakeFiles/simple-calc.dir/main.cc.o"

# External object files for target simple-calc
simple__calc_EXTERNAL_OBJECTS =

simple-calc: CMakeFiles/simple-calc.dir/main.cc.o
simple-calc: CMakeFiles/simple-calc.dir/build.make
simple-calc: CMakeFiles/simple-calc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nikechukwu/Desktop/projects/c++-catalog/simple-projects/simple-calc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable simple-calc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simple-calc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simple-calc.dir/build: simple-calc
.PHONY : CMakeFiles/simple-calc.dir/build

CMakeFiles/simple-calc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simple-calc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simple-calc.dir/clean

CMakeFiles/simple-calc.dir/depend:
	cd /Users/nikechukwu/Desktop/projects/c++-catalog/simple-projects/simple-calc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nikechukwu/Desktop/projects/c++-catalog/simple-projects/simple-calc /Users/nikechukwu/Desktop/projects/c++-catalog/simple-projects/simple-calc /Users/nikechukwu/Desktop/projects/c++-catalog/simple-projects/simple-calc/build /Users/nikechukwu/Desktop/projects/c++-catalog/simple-projects/simple-calc/build /Users/nikechukwu/Desktop/projects/c++-catalog/simple-projects/simple-calc/build/CMakeFiles/simple-calc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simple-calc.dir/depend

