# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/anuuthomson/ClionProjects/hf_ict_uebungen/8.1_kleinsteZahl

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/anuuthomson/ClionProjects/hf_ict_uebungen/8.1_kleinsteZahl/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/8_1_kleinsteZahl.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/8_1_kleinsteZahl.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/8_1_kleinsteZahl.dir/flags.make

CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.o: CMakeFiles/8_1_kleinsteZahl.dir/flags.make
CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anuuthomson/ClionProjects/hf_ict_uebungen/8.1_kleinsteZahl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.o -c /Users/anuuthomson/ClionProjects/hf_ict_uebungen/8.1_kleinsteZahl/main.cpp

CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/anuuthomson/ClionProjects/hf_ict_uebungen/8.1_kleinsteZahl/main.cpp > CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.i

CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/anuuthomson/ClionProjects/hf_ict_uebungen/8.1_kleinsteZahl/main.cpp -o CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.s

CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.o.requires

CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.o.provides: CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/8_1_kleinsteZahl.dir/build.make CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.o.provides

CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.o.provides.build: CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.o


# Object files for target 8_1_kleinsteZahl
8_1_kleinsteZahl_OBJECTS = \
"CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.o"

# External object files for target 8_1_kleinsteZahl
8_1_kleinsteZahl_EXTERNAL_OBJECTS =

8_1_kleinsteZahl: CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.o
8_1_kleinsteZahl: CMakeFiles/8_1_kleinsteZahl.dir/build.make
8_1_kleinsteZahl: CMakeFiles/8_1_kleinsteZahl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/anuuthomson/ClionProjects/hf_ict_uebungen/8.1_kleinsteZahl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 8_1_kleinsteZahl"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/8_1_kleinsteZahl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/8_1_kleinsteZahl.dir/build: 8_1_kleinsteZahl

.PHONY : CMakeFiles/8_1_kleinsteZahl.dir/build

CMakeFiles/8_1_kleinsteZahl.dir/requires: CMakeFiles/8_1_kleinsteZahl.dir/main.cpp.o.requires

.PHONY : CMakeFiles/8_1_kleinsteZahl.dir/requires

CMakeFiles/8_1_kleinsteZahl.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/8_1_kleinsteZahl.dir/cmake_clean.cmake
.PHONY : CMakeFiles/8_1_kleinsteZahl.dir/clean

CMakeFiles/8_1_kleinsteZahl.dir/depend:
	cd /Users/anuuthomson/ClionProjects/hf_ict_uebungen/8.1_kleinsteZahl/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/anuuthomson/ClionProjects/hf_ict_uebungen/8.1_kleinsteZahl /Users/anuuthomson/ClionProjects/hf_ict_uebungen/8.1_kleinsteZahl /Users/anuuthomson/ClionProjects/hf_ict_uebungen/8.1_kleinsteZahl/cmake-build-debug /Users/anuuthomson/ClionProjects/hf_ict_uebungen/8.1_kleinsteZahl/cmake-build-debug /Users/anuuthomson/ClionProjects/hf_ict_uebungen/8.1_kleinsteZahl/cmake-build-debug/CMakeFiles/8_1_kleinsteZahl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/8_1_kleinsteZahl.dir/depend
