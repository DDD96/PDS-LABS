# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/davide/CLion-2019.3.5/clion-2019.3.5/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/davide/CLion-2019.3.5/clion-2019.3.5/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/davide/Desktop/PDS/PDS-LABS/LAB1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/davide/Desktop/PDS/PDS-LABS/LAB1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LAB1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LAB1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LAB1.dir/flags.make

CMakeFiles/LAB1.dir/main.cpp.o: CMakeFiles/LAB1.dir/flags.make
CMakeFiles/LAB1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/davide/Desktop/PDS/PDS-LABS/LAB1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LAB1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LAB1.dir/main.cpp.o -c /home/davide/Desktop/PDS/PDS-LABS/LAB1/main.cpp

CMakeFiles/LAB1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LAB1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/davide/Desktop/PDS/PDS-LABS/LAB1/main.cpp > CMakeFiles/LAB1.dir/main.cpp.i

CMakeFiles/LAB1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LAB1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/davide/Desktop/PDS/PDS-LABS/LAB1/main.cpp -o CMakeFiles/LAB1.dir/main.cpp.s

CMakeFiles/LAB1.dir/Message.cpp.o: CMakeFiles/LAB1.dir/flags.make
CMakeFiles/LAB1.dir/Message.cpp.o: ../Message.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/davide/Desktop/PDS/PDS-LABS/LAB1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LAB1.dir/Message.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LAB1.dir/Message.cpp.o -c /home/davide/Desktop/PDS/PDS-LABS/LAB1/Message.cpp

CMakeFiles/LAB1.dir/Message.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LAB1.dir/Message.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/davide/Desktop/PDS/PDS-LABS/LAB1/Message.cpp > CMakeFiles/LAB1.dir/Message.cpp.i

CMakeFiles/LAB1.dir/Message.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LAB1.dir/Message.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/davide/Desktop/PDS/PDS-LABS/LAB1/Message.cpp -o CMakeFiles/LAB1.dir/Message.cpp.s

CMakeFiles/LAB1.dir/DurationLogger.cpp.o: CMakeFiles/LAB1.dir/flags.make
CMakeFiles/LAB1.dir/DurationLogger.cpp.o: ../DurationLogger.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/davide/Desktop/PDS/PDS-LABS/LAB1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/LAB1.dir/DurationLogger.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LAB1.dir/DurationLogger.cpp.o -c /home/davide/Desktop/PDS/PDS-LABS/LAB1/DurationLogger.cpp

CMakeFiles/LAB1.dir/DurationLogger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LAB1.dir/DurationLogger.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/davide/Desktop/PDS/PDS-LABS/LAB1/DurationLogger.cpp > CMakeFiles/LAB1.dir/DurationLogger.cpp.i

CMakeFiles/LAB1.dir/DurationLogger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LAB1.dir/DurationLogger.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/davide/Desktop/PDS/PDS-LABS/LAB1/DurationLogger.cpp -o CMakeFiles/LAB1.dir/DurationLogger.cpp.s

CMakeFiles/LAB1.dir/MessageStore.cpp.o: CMakeFiles/LAB1.dir/flags.make
CMakeFiles/LAB1.dir/MessageStore.cpp.o: ../MessageStore.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/davide/Desktop/PDS/PDS-LABS/LAB1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/LAB1.dir/MessageStore.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LAB1.dir/MessageStore.cpp.o -c /home/davide/Desktop/PDS/PDS-LABS/LAB1/MessageStore.cpp

CMakeFiles/LAB1.dir/MessageStore.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LAB1.dir/MessageStore.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/davide/Desktop/PDS/PDS-LABS/LAB1/MessageStore.cpp > CMakeFiles/LAB1.dir/MessageStore.cpp.i

CMakeFiles/LAB1.dir/MessageStore.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LAB1.dir/MessageStore.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/davide/Desktop/PDS/PDS-LABS/LAB1/MessageStore.cpp -o CMakeFiles/LAB1.dir/MessageStore.cpp.s

# Object files for target LAB1
LAB1_OBJECTS = \
"CMakeFiles/LAB1.dir/main.cpp.o" \
"CMakeFiles/LAB1.dir/Message.cpp.o" \
"CMakeFiles/LAB1.dir/DurationLogger.cpp.o" \
"CMakeFiles/LAB1.dir/MessageStore.cpp.o"

# External object files for target LAB1
LAB1_EXTERNAL_OBJECTS =

LAB1: CMakeFiles/LAB1.dir/main.cpp.o
LAB1: CMakeFiles/LAB1.dir/Message.cpp.o
LAB1: CMakeFiles/LAB1.dir/DurationLogger.cpp.o
LAB1: CMakeFiles/LAB1.dir/MessageStore.cpp.o
LAB1: CMakeFiles/LAB1.dir/build.make
LAB1: CMakeFiles/LAB1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/davide/Desktop/PDS/PDS-LABS/LAB1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable LAB1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LAB1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LAB1.dir/build: LAB1

.PHONY : CMakeFiles/LAB1.dir/build

CMakeFiles/LAB1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LAB1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LAB1.dir/clean

CMakeFiles/LAB1.dir/depend:
	cd /home/davide/Desktop/PDS/PDS-LABS/LAB1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/davide/Desktop/PDS/PDS-LABS/LAB1 /home/davide/Desktop/PDS/PDS-LABS/LAB1 /home/davide/Desktop/PDS/PDS-LABS/LAB1/cmake-build-debug /home/davide/Desktop/PDS/PDS-LABS/LAB1/cmake-build-debug /home/davide/Desktop/PDS/PDS-LABS/LAB1/cmake-build-debug/CMakeFiles/LAB1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LAB1.dir/depend

