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
CMAKE_COMMAND = /home/resolution/Documents/Clion/clion-2016.3.4/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/resolution/Documents/Clion/clion-2016.3.4/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/resolution/CLionProjects/List&queue"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/resolution/CLionProjects/List&queue/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/List_queue.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/List_queue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/List_queue.dir/flags.make

CMakeFiles/List_queue.dir/main.cpp.o: CMakeFiles/List_queue.dir/flags.make
CMakeFiles/List_queue.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/resolution/CLionProjects/List&queue/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/List_queue.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/List_queue.dir/main.cpp.o -c "/home/resolution/CLionProjects/List&queue/main.cpp"

CMakeFiles/List_queue.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/List_queue.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/resolution/CLionProjects/List&queue/main.cpp" > CMakeFiles/List_queue.dir/main.cpp.i

CMakeFiles/List_queue.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/List_queue.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/resolution/CLionProjects/List&queue/main.cpp" -o CMakeFiles/List_queue.dir/main.cpp.s

CMakeFiles/List_queue.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/List_queue.dir/main.cpp.o.requires

CMakeFiles/List_queue.dir/main.cpp.o.provides: CMakeFiles/List_queue.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/List_queue.dir/build.make CMakeFiles/List_queue.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/List_queue.dir/main.cpp.o.provides

CMakeFiles/List_queue.dir/main.cpp.o.provides.build: CMakeFiles/List_queue.dir/main.cpp.o


# Object files for target List_queue
List_queue_OBJECTS = \
"CMakeFiles/List_queue.dir/main.cpp.o"

# External object files for target List_queue
List_queue_EXTERNAL_OBJECTS =

List_queue: CMakeFiles/List_queue.dir/main.cpp.o
List_queue: CMakeFiles/List_queue.dir/build.make
List_queue: CMakeFiles/List_queue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/resolution/CLionProjects/List&queue/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable List_queue"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/List_queue.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/List_queue.dir/build: List_queue

.PHONY : CMakeFiles/List_queue.dir/build

CMakeFiles/List_queue.dir/requires: CMakeFiles/List_queue.dir/main.cpp.o.requires

.PHONY : CMakeFiles/List_queue.dir/requires

CMakeFiles/List_queue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/List_queue.dir/cmake_clean.cmake
.PHONY : CMakeFiles/List_queue.dir/clean

CMakeFiles/List_queue.dir/depend:
	cd "/home/resolution/CLionProjects/List&queue/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/resolution/CLionProjects/List&queue" "/home/resolution/CLionProjects/List&queue" "/home/resolution/CLionProjects/List&queue/cmake-build-debug" "/home/resolution/CLionProjects/List&queue/cmake-build-debug" "/home/resolution/CLionProjects/List&queue/cmake-build-debug/CMakeFiles/List_queue.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/List_queue.dir/depend
