# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = "/Users/kangshuaibo/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/181.5540.25/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/kangshuaibo/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/181.5540.25/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kangshuaibo/Desktop/My-Cpp-Learn/project/untitled

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kangshuaibo/Desktop/My-Cpp-Learn/project/untitled/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled.dir/flags.make

CMakeFiles/untitled.dir/library.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/library.cpp.o: ../library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kangshuaibo/Desktop/My-Cpp-Learn/project/untitled/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled.dir/library.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled.dir/library.cpp.o -c /Users/kangshuaibo/Desktop/My-Cpp-Learn/project/untitled/library.cpp

CMakeFiles/untitled.dir/library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled.dir/library.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kangshuaibo/Desktop/My-Cpp-Learn/project/untitled/library.cpp > CMakeFiles/untitled.dir/library.cpp.i

CMakeFiles/untitled.dir/library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/library.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kangshuaibo/Desktop/My-Cpp-Learn/project/untitled/library.cpp -o CMakeFiles/untitled.dir/library.cpp.s

CMakeFiles/untitled.dir/library.cpp.o.requires:

.PHONY : CMakeFiles/untitled.dir/library.cpp.o.requires

CMakeFiles/untitled.dir/library.cpp.o.provides: CMakeFiles/untitled.dir/library.cpp.o.requires
	$(MAKE) -f CMakeFiles/untitled.dir/build.make CMakeFiles/untitled.dir/library.cpp.o.provides.build
.PHONY : CMakeFiles/untitled.dir/library.cpp.o.provides

CMakeFiles/untitled.dir/library.cpp.o.provides.build: CMakeFiles/untitled.dir/library.cpp.o


# Object files for target untitled
untitled_OBJECTS = \
"CMakeFiles/untitled.dir/library.cpp.o"

# External object files for target untitled
untitled_EXTERNAL_OBJECTS =

libuntitled.a: CMakeFiles/untitled.dir/library.cpp.o
libuntitled.a: CMakeFiles/untitled.dir/build.make
libuntitled.a: CMakeFiles/untitled.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kangshuaibo/Desktop/My-Cpp-Learn/project/untitled/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libuntitled.a"
	$(CMAKE_COMMAND) -P CMakeFiles/untitled.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled.dir/build: libuntitled.a

.PHONY : CMakeFiles/untitled.dir/build

CMakeFiles/untitled.dir/requires: CMakeFiles/untitled.dir/library.cpp.o.requires

.PHONY : CMakeFiles/untitled.dir/requires

CMakeFiles/untitled.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled.dir/clean

CMakeFiles/untitled.dir/depend:
	cd /Users/kangshuaibo/Desktop/My-Cpp-Learn/project/untitled/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kangshuaibo/Desktop/My-Cpp-Learn/project/untitled /Users/kangshuaibo/Desktop/My-Cpp-Learn/project/untitled /Users/kangshuaibo/Desktop/My-Cpp-Learn/project/untitled/cmake-build-debug /Users/kangshuaibo/Desktop/My-Cpp-Learn/project/untitled/cmake-build-debug /Users/kangshuaibo/Desktop/My-Cpp-Learn/project/untitled/cmake-build-debug/CMakeFiles/untitled.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled.dir/depend

