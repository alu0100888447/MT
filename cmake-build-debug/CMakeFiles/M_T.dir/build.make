# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /opt/clion-2017.2.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2017.2.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/izm20/Workspace/CC/Practica2/M.T

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/izm20/Workspace/CC/Practica2/M.T/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/M_T.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/M_T.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/M_T.dir/flags.make

CMakeFiles/M_T.dir/src/main.cpp.o: CMakeFiles/M_T.dir/flags.make
CMakeFiles/M_T.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/izm20/Workspace/CC/Practica2/M.T/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/M_T.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/M_T.dir/src/main.cpp.o -c /home/izm20/Workspace/CC/Practica2/M.T/src/main.cpp

CMakeFiles/M_T.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/M_T.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/izm20/Workspace/CC/Practica2/M.T/src/main.cpp > CMakeFiles/M_T.dir/src/main.cpp.i

CMakeFiles/M_T.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/M_T.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/izm20/Workspace/CC/Practica2/M.T/src/main.cpp -o CMakeFiles/M_T.dir/src/main.cpp.s

CMakeFiles/M_T.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/M_T.dir/src/main.cpp.o.requires

CMakeFiles/M_T.dir/src/main.cpp.o.provides: CMakeFiles/M_T.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/M_T.dir/build.make CMakeFiles/M_T.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/M_T.dir/src/main.cpp.o.provides

CMakeFiles/M_T.dir/src/main.cpp.o.provides.build: CMakeFiles/M_T.dir/src/main.cpp.o


CMakeFiles/M_T.dir/src/MT.cpp.o: CMakeFiles/M_T.dir/flags.make
CMakeFiles/M_T.dir/src/MT.cpp.o: ../src/MT.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/izm20/Workspace/CC/Practica2/M.T/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/M_T.dir/src/MT.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/M_T.dir/src/MT.cpp.o -c /home/izm20/Workspace/CC/Practica2/M.T/src/MT.cpp

CMakeFiles/M_T.dir/src/MT.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/M_T.dir/src/MT.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/izm20/Workspace/CC/Practica2/M.T/src/MT.cpp > CMakeFiles/M_T.dir/src/MT.cpp.i

CMakeFiles/M_T.dir/src/MT.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/M_T.dir/src/MT.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/izm20/Workspace/CC/Practica2/M.T/src/MT.cpp -o CMakeFiles/M_T.dir/src/MT.cpp.s

CMakeFiles/M_T.dir/src/MT.cpp.o.requires:

.PHONY : CMakeFiles/M_T.dir/src/MT.cpp.o.requires

CMakeFiles/M_T.dir/src/MT.cpp.o.provides: CMakeFiles/M_T.dir/src/MT.cpp.o.requires
	$(MAKE) -f CMakeFiles/M_T.dir/build.make CMakeFiles/M_T.dir/src/MT.cpp.o.provides.build
.PHONY : CMakeFiles/M_T.dir/src/MT.cpp.o.provides

CMakeFiles/M_T.dir/src/MT.cpp.o.provides.build: CMakeFiles/M_T.dir/src/MT.cpp.o


CMakeFiles/M_T.dir/src/Cinta.cpp.o: CMakeFiles/M_T.dir/flags.make
CMakeFiles/M_T.dir/src/Cinta.cpp.o: ../src/Cinta.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/izm20/Workspace/CC/Practica2/M.T/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/M_T.dir/src/Cinta.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/M_T.dir/src/Cinta.cpp.o -c /home/izm20/Workspace/CC/Practica2/M.T/src/Cinta.cpp

CMakeFiles/M_T.dir/src/Cinta.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/M_T.dir/src/Cinta.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/izm20/Workspace/CC/Practica2/M.T/src/Cinta.cpp > CMakeFiles/M_T.dir/src/Cinta.cpp.i

CMakeFiles/M_T.dir/src/Cinta.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/M_T.dir/src/Cinta.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/izm20/Workspace/CC/Practica2/M.T/src/Cinta.cpp -o CMakeFiles/M_T.dir/src/Cinta.cpp.s

CMakeFiles/M_T.dir/src/Cinta.cpp.o.requires:

.PHONY : CMakeFiles/M_T.dir/src/Cinta.cpp.o.requires

CMakeFiles/M_T.dir/src/Cinta.cpp.o.provides: CMakeFiles/M_T.dir/src/Cinta.cpp.o.requires
	$(MAKE) -f CMakeFiles/M_T.dir/build.make CMakeFiles/M_T.dir/src/Cinta.cpp.o.provides.build
.PHONY : CMakeFiles/M_T.dir/src/Cinta.cpp.o.provides

CMakeFiles/M_T.dir/src/Cinta.cpp.o.provides.build: CMakeFiles/M_T.dir/src/Cinta.cpp.o


CMakeFiles/M_T.dir/src/Estado.cpp.o: CMakeFiles/M_T.dir/flags.make
CMakeFiles/M_T.dir/src/Estado.cpp.o: ../src/Estado.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/izm20/Workspace/CC/Practica2/M.T/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/M_T.dir/src/Estado.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/M_T.dir/src/Estado.cpp.o -c /home/izm20/Workspace/CC/Practica2/M.T/src/Estado.cpp

CMakeFiles/M_T.dir/src/Estado.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/M_T.dir/src/Estado.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/izm20/Workspace/CC/Practica2/M.T/src/Estado.cpp > CMakeFiles/M_T.dir/src/Estado.cpp.i

CMakeFiles/M_T.dir/src/Estado.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/M_T.dir/src/Estado.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/izm20/Workspace/CC/Practica2/M.T/src/Estado.cpp -o CMakeFiles/M_T.dir/src/Estado.cpp.s

CMakeFiles/M_T.dir/src/Estado.cpp.o.requires:

.PHONY : CMakeFiles/M_T.dir/src/Estado.cpp.o.requires

CMakeFiles/M_T.dir/src/Estado.cpp.o.provides: CMakeFiles/M_T.dir/src/Estado.cpp.o.requires
	$(MAKE) -f CMakeFiles/M_T.dir/build.make CMakeFiles/M_T.dir/src/Estado.cpp.o.provides.build
.PHONY : CMakeFiles/M_T.dir/src/Estado.cpp.o.provides

CMakeFiles/M_T.dir/src/Estado.cpp.o.provides.build: CMakeFiles/M_T.dir/src/Estado.cpp.o


CMakeFiles/M_T.dir/src/Transicion.cpp.o: CMakeFiles/M_T.dir/flags.make
CMakeFiles/M_T.dir/src/Transicion.cpp.o: ../src/Transicion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/izm20/Workspace/CC/Practica2/M.T/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/M_T.dir/src/Transicion.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/M_T.dir/src/Transicion.cpp.o -c /home/izm20/Workspace/CC/Practica2/M.T/src/Transicion.cpp

CMakeFiles/M_T.dir/src/Transicion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/M_T.dir/src/Transicion.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/izm20/Workspace/CC/Practica2/M.T/src/Transicion.cpp > CMakeFiles/M_T.dir/src/Transicion.cpp.i

CMakeFiles/M_T.dir/src/Transicion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/M_T.dir/src/Transicion.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/izm20/Workspace/CC/Practica2/M.T/src/Transicion.cpp -o CMakeFiles/M_T.dir/src/Transicion.cpp.s

CMakeFiles/M_T.dir/src/Transicion.cpp.o.requires:

.PHONY : CMakeFiles/M_T.dir/src/Transicion.cpp.o.requires

CMakeFiles/M_T.dir/src/Transicion.cpp.o.provides: CMakeFiles/M_T.dir/src/Transicion.cpp.o.requires
	$(MAKE) -f CMakeFiles/M_T.dir/build.make CMakeFiles/M_T.dir/src/Transicion.cpp.o.provides.build
.PHONY : CMakeFiles/M_T.dir/src/Transicion.cpp.o.provides

CMakeFiles/M_T.dir/src/Transicion.cpp.o.provides.build: CMakeFiles/M_T.dir/src/Transicion.cpp.o


# Object files for target M_T
M_T_OBJECTS = \
"CMakeFiles/M_T.dir/src/main.cpp.o" \
"CMakeFiles/M_T.dir/src/MT.cpp.o" \
"CMakeFiles/M_T.dir/src/Cinta.cpp.o" \
"CMakeFiles/M_T.dir/src/Estado.cpp.o" \
"CMakeFiles/M_T.dir/src/Transicion.cpp.o"

# External object files for target M_T
M_T_EXTERNAL_OBJECTS =

M_T: CMakeFiles/M_T.dir/src/main.cpp.o
M_T: CMakeFiles/M_T.dir/src/MT.cpp.o
M_T: CMakeFiles/M_T.dir/src/Cinta.cpp.o
M_T: CMakeFiles/M_T.dir/src/Estado.cpp.o
M_T: CMakeFiles/M_T.dir/src/Transicion.cpp.o
M_T: CMakeFiles/M_T.dir/build.make
M_T: CMakeFiles/M_T.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/izm20/Workspace/CC/Practica2/M.T/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable M_T"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/M_T.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/M_T.dir/build: M_T

.PHONY : CMakeFiles/M_T.dir/build

CMakeFiles/M_T.dir/requires: CMakeFiles/M_T.dir/src/main.cpp.o.requires
CMakeFiles/M_T.dir/requires: CMakeFiles/M_T.dir/src/MT.cpp.o.requires
CMakeFiles/M_T.dir/requires: CMakeFiles/M_T.dir/src/Cinta.cpp.o.requires
CMakeFiles/M_T.dir/requires: CMakeFiles/M_T.dir/src/Estado.cpp.o.requires
CMakeFiles/M_T.dir/requires: CMakeFiles/M_T.dir/src/Transicion.cpp.o.requires

.PHONY : CMakeFiles/M_T.dir/requires

CMakeFiles/M_T.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/M_T.dir/cmake_clean.cmake
.PHONY : CMakeFiles/M_T.dir/clean

CMakeFiles/M_T.dir/depend:
	cd /home/izm20/Workspace/CC/Practica2/M.T/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/izm20/Workspace/CC/Practica2/M.T /home/izm20/Workspace/CC/Practica2/M.T /home/izm20/Workspace/CC/Practica2/M.T/cmake-build-debug /home/izm20/Workspace/CC/Practica2/M.T/cmake-build-debug /home/izm20/Workspace/CC/Practica2/M.T/cmake-build-debug/CMakeFiles/M_T.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/M_T.dir/depend
