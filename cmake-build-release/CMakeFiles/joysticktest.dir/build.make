# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /snap/clion/290/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /snap/clion/290/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/starlight/CLionProjects/joysticktest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/starlight/CLionProjects/joysticktest/cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/joysticktest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/joysticktest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/joysticktest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/joysticktest.dir/flags.make

CMakeFiles/joysticktest.dir/main.cpp.o: CMakeFiles/joysticktest.dir/flags.make
CMakeFiles/joysticktest.dir/main.cpp.o: /home/starlight/CLionProjects/joysticktest/main.cpp
CMakeFiles/joysticktest.dir/main.cpp.o: CMakeFiles/joysticktest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/starlight/CLionProjects/joysticktest/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/joysticktest.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/joysticktest.dir/main.cpp.o -MF CMakeFiles/joysticktest.dir/main.cpp.o.d -o CMakeFiles/joysticktest.dir/main.cpp.o -c /home/starlight/CLionProjects/joysticktest/main.cpp

CMakeFiles/joysticktest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/joysticktest.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/starlight/CLionProjects/joysticktest/main.cpp > CMakeFiles/joysticktest.dir/main.cpp.i

CMakeFiles/joysticktest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/joysticktest.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/starlight/CLionProjects/joysticktest/main.cpp -o CMakeFiles/joysticktest.dir/main.cpp.s

# Object files for target joysticktest
joysticktest_OBJECTS = \
"CMakeFiles/joysticktest.dir/main.cpp.o"

# External object files for target joysticktest
joysticktest_EXTERNAL_OBJECTS =

joysticktest: CMakeFiles/joysticktest.dir/main.cpp.o
joysticktest: CMakeFiles/joysticktest.dir/build.make
joysticktest: CMakeFiles/joysticktest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/starlight/CLionProjects/joysticktest/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable joysticktest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/joysticktest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/joysticktest.dir/build: joysticktest
.PHONY : CMakeFiles/joysticktest.dir/build

CMakeFiles/joysticktest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/joysticktest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/joysticktest.dir/clean

CMakeFiles/joysticktest.dir/depend:
	cd /home/starlight/CLionProjects/joysticktest/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/starlight/CLionProjects/joysticktest /home/starlight/CLionProjects/joysticktest /home/starlight/CLionProjects/joysticktest/cmake-build-release /home/starlight/CLionProjects/joysticktest/cmake-build-release /home/starlight/CLionProjects/joysticktest/cmake-build-release/CMakeFiles/joysticktest.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/joysticktest.dir/depend
