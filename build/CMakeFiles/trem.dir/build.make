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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/andre/Documentos/UDESC/MFO0001

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/andre/Documentos/UDESC/MFO0001/build

# Include any dependencies generated for this target.
include CMakeFiles/trem.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/trem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/trem.dir/flags.make

CMakeFiles/trem.dir/main.cpp.o: CMakeFiles/trem.dir/flags.make
CMakeFiles/trem.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andre/Documentos/UDESC/MFO0001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/trem.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trem.dir/main.cpp.o -c /home/andre/Documentos/UDESC/MFO0001/main.cpp

CMakeFiles/trem.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trem.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andre/Documentos/UDESC/MFO0001/main.cpp > CMakeFiles/trem.dir/main.cpp.i

CMakeFiles/trem.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trem.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andre/Documentos/UDESC/MFO0001/main.cpp -o CMakeFiles/trem.dir/main.cpp.s

CMakeFiles/trem.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/trem.dir/main.cpp.o.requires

CMakeFiles/trem.dir/main.cpp.o.provides: CMakeFiles/trem.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/trem.dir/build.make CMakeFiles/trem.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/trem.dir/main.cpp.o.provides

CMakeFiles/trem.dir/main.cpp.o.provides.build: CMakeFiles/trem.dir/main.cpp.o


CMakeFiles/trem.dir/class/threads/sema.cpp.o: CMakeFiles/trem.dir/flags.make
CMakeFiles/trem.dir/class/threads/sema.cpp.o: ../class/threads/sema.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andre/Documentos/UDESC/MFO0001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/trem.dir/class/threads/sema.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trem.dir/class/threads/sema.cpp.o -c /home/andre/Documentos/UDESC/MFO0001/class/threads/sema.cpp

CMakeFiles/trem.dir/class/threads/sema.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trem.dir/class/threads/sema.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andre/Documentos/UDESC/MFO0001/class/threads/sema.cpp > CMakeFiles/trem.dir/class/threads/sema.cpp.i

CMakeFiles/trem.dir/class/threads/sema.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trem.dir/class/threads/sema.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andre/Documentos/UDESC/MFO0001/class/threads/sema.cpp -o CMakeFiles/trem.dir/class/threads/sema.cpp.s

CMakeFiles/trem.dir/class/threads/sema.cpp.o.requires:

.PHONY : CMakeFiles/trem.dir/class/threads/sema.cpp.o.requires

CMakeFiles/trem.dir/class/threads/sema.cpp.o.provides: CMakeFiles/trem.dir/class/threads/sema.cpp.o.requires
	$(MAKE) -f CMakeFiles/trem.dir/build.make CMakeFiles/trem.dir/class/threads/sema.cpp.o.provides.build
.PHONY : CMakeFiles/trem.dir/class/threads/sema.cpp.o.provides

CMakeFiles/trem.dir/class/threads/sema.cpp.o.provides.build: CMakeFiles/trem.dir/class/threads/sema.cpp.o


CMakeFiles/trem.dir/class/threads/task.cpp.o: CMakeFiles/trem.dir/flags.make
CMakeFiles/trem.dir/class/threads/task.cpp.o: ../class/threads/task.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andre/Documentos/UDESC/MFO0001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/trem.dir/class/threads/task.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trem.dir/class/threads/task.cpp.o -c /home/andre/Documentos/UDESC/MFO0001/class/threads/task.cpp

CMakeFiles/trem.dir/class/threads/task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trem.dir/class/threads/task.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andre/Documentos/UDESC/MFO0001/class/threads/task.cpp > CMakeFiles/trem.dir/class/threads/task.cpp.i

CMakeFiles/trem.dir/class/threads/task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trem.dir/class/threads/task.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andre/Documentos/UDESC/MFO0001/class/threads/task.cpp -o CMakeFiles/trem.dir/class/threads/task.cpp.s

CMakeFiles/trem.dir/class/threads/task.cpp.o.requires:

.PHONY : CMakeFiles/trem.dir/class/threads/task.cpp.o.requires

CMakeFiles/trem.dir/class/threads/task.cpp.o.provides: CMakeFiles/trem.dir/class/threads/task.cpp.o.requires
	$(MAKE) -f CMakeFiles/trem.dir/build.make CMakeFiles/trem.dir/class/threads/task.cpp.o.provides.build
.PHONY : CMakeFiles/trem.dir/class/threads/task.cpp.o.provides

CMakeFiles/trem.dir/class/threads/task.cpp.o.provides.build: CMakeFiles/trem.dir/class/threads/task.cpp.o


CMakeFiles/trem.dir/class/threads/taskparam.cpp.o: CMakeFiles/trem.dir/flags.make
CMakeFiles/trem.dir/class/threads/taskparam.cpp.o: ../class/threads/taskparam.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andre/Documentos/UDESC/MFO0001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/trem.dir/class/threads/taskparam.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trem.dir/class/threads/taskparam.cpp.o -c /home/andre/Documentos/UDESC/MFO0001/class/threads/taskparam.cpp

CMakeFiles/trem.dir/class/threads/taskparam.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trem.dir/class/threads/taskparam.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andre/Documentos/UDESC/MFO0001/class/threads/taskparam.cpp > CMakeFiles/trem.dir/class/threads/taskparam.cpp.i

CMakeFiles/trem.dir/class/threads/taskparam.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trem.dir/class/threads/taskparam.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andre/Documentos/UDESC/MFO0001/class/threads/taskparam.cpp -o CMakeFiles/trem.dir/class/threads/taskparam.cpp.s

CMakeFiles/trem.dir/class/threads/taskparam.cpp.o.requires:

.PHONY : CMakeFiles/trem.dir/class/threads/taskparam.cpp.o.requires

CMakeFiles/trem.dir/class/threads/taskparam.cpp.o.provides: CMakeFiles/trem.dir/class/threads/taskparam.cpp.o.requires
	$(MAKE) -f CMakeFiles/trem.dir/build.make CMakeFiles/trem.dir/class/threads/taskparam.cpp.o.provides.build
.PHONY : CMakeFiles/trem.dir/class/threads/taskparam.cpp.o.provides

CMakeFiles/trem.dir/class/threads/taskparam.cpp.o.provides.build: CMakeFiles/trem.dir/class/threads/taskparam.cpp.o


CMakeFiles/trem.dir/class/threads/thread.cpp.o: CMakeFiles/trem.dir/flags.make
CMakeFiles/trem.dir/class/threads/thread.cpp.o: ../class/threads/thread.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andre/Documentos/UDESC/MFO0001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/trem.dir/class/threads/thread.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trem.dir/class/threads/thread.cpp.o -c /home/andre/Documentos/UDESC/MFO0001/class/threads/thread.cpp

CMakeFiles/trem.dir/class/threads/thread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trem.dir/class/threads/thread.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andre/Documentos/UDESC/MFO0001/class/threads/thread.cpp > CMakeFiles/trem.dir/class/threads/thread.cpp.i

CMakeFiles/trem.dir/class/threads/thread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trem.dir/class/threads/thread.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andre/Documentos/UDESC/MFO0001/class/threads/thread.cpp -o CMakeFiles/trem.dir/class/threads/thread.cpp.s

CMakeFiles/trem.dir/class/threads/thread.cpp.o.requires:

.PHONY : CMakeFiles/trem.dir/class/threads/thread.cpp.o.requires

CMakeFiles/trem.dir/class/threads/thread.cpp.o.provides: CMakeFiles/trem.dir/class/threads/thread.cpp.o.requires
	$(MAKE) -f CMakeFiles/trem.dir/build.make CMakeFiles/trem.dir/class/threads/thread.cpp.o.provides.build
.PHONY : CMakeFiles/trem.dir/class/threads/thread.cpp.o.provides

CMakeFiles/trem.dir/class/threads/thread.cpp.o.provides.build: CMakeFiles/trem.dir/class/threads/thread.cpp.o


CMakeFiles/trem.dir/class/mapatrem.cpp.o: CMakeFiles/trem.dir/flags.make
CMakeFiles/trem.dir/class/mapatrem.cpp.o: ../class/mapatrem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andre/Documentos/UDESC/MFO0001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/trem.dir/class/mapatrem.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trem.dir/class/mapatrem.cpp.o -c /home/andre/Documentos/UDESC/MFO0001/class/mapatrem.cpp

CMakeFiles/trem.dir/class/mapatrem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trem.dir/class/mapatrem.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andre/Documentos/UDESC/MFO0001/class/mapatrem.cpp > CMakeFiles/trem.dir/class/mapatrem.cpp.i

CMakeFiles/trem.dir/class/mapatrem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trem.dir/class/mapatrem.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andre/Documentos/UDESC/MFO0001/class/mapatrem.cpp -o CMakeFiles/trem.dir/class/mapatrem.cpp.s

CMakeFiles/trem.dir/class/mapatrem.cpp.o.requires:

.PHONY : CMakeFiles/trem.dir/class/mapatrem.cpp.o.requires

CMakeFiles/trem.dir/class/mapatrem.cpp.o.provides: CMakeFiles/trem.dir/class/mapatrem.cpp.o.requires
	$(MAKE) -f CMakeFiles/trem.dir/build.make CMakeFiles/trem.dir/class/mapatrem.cpp.o.provides.build
.PHONY : CMakeFiles/trem.dir/class/mapatrem.cpp.o.provides

CMakeFiles/trem.dir/class/mapatrem.cpp.o.provides.build: CMakeFiles/trem.dir/class/mapatrem.cpp.o


CMakeFiles/trem.dir/class/draw.cpp.o: CMakeFiles/trem.dir/flags.make
CMakeFiles/trem.dir/class/draw.cpp.o: ../class/draw.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andre/Documentos/UDESC/MFO0001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/trem.dir/class/draw.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trem.dir/class/draw.cpp.o -c /home/andre/Documentos/UDESC/MFO0001/class/draw.cpp

CMakeFiles/trem.dir/class/draw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trem.dir/class/draw.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andre/Documentos/UDESC/MFO0001/class/draw.cpp > CMakeFiles/trem.dir/class/draw.cpp.i

CMakeFiles/trem.dir/class/draw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trem.dir/class/draw.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andre/Documentos/UDESC/MFO0001/class/draw.cpp -o CMakeFiles/trem.dir/class/draw.cpp.s

CMakeFiles/trem.dir/class/draw.cpp.o.requires:

.PHONY : CMakeFiles/trem.dir/class/draw.cpp.o.requires

CMakeFiles/trem.dir/class/draw.cpp.o.provides: CMakeFiles/trem.dir/class/draw.cpp.o.requires
	$(MAKE) -f CMakeFiles/trem.dir/build.make CMakeFiles/trem.dir/class/draw.cpp.o.provides.build
.PHONY : CMakeFiles/trem.dir/class/draw.cpp.o.provides

CMakeFiles/trem.dir/class/draw.cpp.o.provides.build: CMakeFiles/trem.dir/class/draw.cpp.o


CMakeFiles/trem.dir/class/linep.cpp.o: CMakeFiles/trem.dir/flags.make
CMakeFiles/trem.dir/class/linep.cpp.o: ../class/linep.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andre/Documentos/UDESC/MFO0001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/trem.dir/class/linep.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trem.dir/class/linep.cpp.o -c /home/andre/Documentos/UDESC/MFO0001/class/linep.cpp

CMakeFiles/trem.dir/class/linep.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trem.dir/class/linep.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andre/Documentos/UDESC/MFO0001/class/linep.cpp > CMakeFiles/trem.dir/class/linep.cpp.i

CMakeFiles/trem.dir/class/linep.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trem.dir/class/linep.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andre/Documentos/UDESC/MFO0001/class/linep.cpp -o CMakeFiles/trem.dir/class/linep.cpp.s

CMakeFiles/trem.dir/class/linep.cpp.o.requires:

.PHONY : CMakeFiles/trem.dir/class/linep.cpp.o.requires

CMakeFiles/trem.dir/class/linep.cpp.o.provides: CMakeFiles/trem.dir/class/linep.cpp.o.requires
	$(MAKE) -f CMakeFiles/trem.dir/build.make CMakeFiles/trem.dir/class/linep.cpp.o.provides.build
.PHONY : CMakeFiles/trem.dir/class/linep.cpp.o.provides

CMakeFiles/trem.dir/class/linep.cpp.o.provides.build: CMakeFiles/trem.dir/class/linep.cpp.o


CMakeFiles/trem.dir/class/path.cpp.o: CMakeFiles/trem.dir/flags.make
CMakeFiles/trem.dir/class/path.cpp.o: ../class/path.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andre/Documentos/UDESC/MFO0001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/trem.dir/class/path.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trem.dir/class/path.cpp.o -c /home/andre/Documentos/UDESC/MFO0001/class/path.cpp

CMakeFiles/trem.dir/class/path.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trem.dir/class/path.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andre/Documentos/UDESC/MFO0001/class/path.cpp > CMakeFiles/trem.dir/class/path.cpp.i

CMakeFiles/trem.dir/class/path.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trem.dir/class/path.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andre/Documentos/UDESC/MFO0001/class/path.cpp -o CMakeFiles/trem.dir/class/path.cpp.s

CMakeFiles/trem.dir/class/path.cpp.o.requires:

.PHONY : CMakeFiles/trem.dir/class/path.cpp.o.requires

CMakeFiles/trem.dir/class/path.cpp.o.provides: CMakeFiles/trem.dir/class/path.cpp.o.requires
	$(MAKE) -f CMakeFiles/trem.dir/build.make CMakeFiles/trem.dir/class/path.cpp.o.provides.build
.PHONY : CMakeFiles/trem.dir/class/path.cpp.o.provides

CMakeFiles/trem.dir/class/path.cpp.o.provides.build: CMakeFiles/trem.dir/class/path.cpp.o


CMakeFiles/trem.dir/class/threadtest.cpp.o: CMakeFiles/trem.dir/flags.make
CMakeFiles/trem.dir/class/threadtest.cpp.o: ../class/threadtest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andre/Documentos/UDESC/MFO0001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/trem.dir/class/threadtest.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trem.dir/class/threadtest.cpp.o -c /home/andre/Documentos/UDESC/MFO0001/class/threadtest.cpp

CMakeFiles/trem.dir/class/threadtest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trem.dir/class/threadtest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andre/Documentos/UDESC/MFO0001/class/threadtest.cpp > CMakeFiles/trem.dir/class/threadtest.cpp.i

CMakeFiles/trem.dir/class/threadtest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trem.dir/class/threadtest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andre/Documentos/UDESC/MFO0001/class/threadtest.cpp -o CMakeFiles/trem.dir/class/threadtest.cpp.s

CMakeFiles/trem.dir/class/threadtest.cpp.o.requires:

.PHONY : CMakeFiles/trem.dir/class/threadtest.cpp.o.requires

CMakeFiles/trem.dir/class/threadtest.cpp.o.provides: CMakeFiles/trem.dir/class/threadtest.cpp.o.requires
	$(MAKE) -f CMakeFiles/trem.dir/build.make CMakeFiles/trem.dir/class/threadtest.cpp.o.provides.build
.PHONY : CMakeFiles/trem.dir/class/threadtest.cpp.o.provides

CMakeFiles/trem.dir/class/threadtest.cpp.o.provides.build: CMakeFiles/trem.dir/class/threadtest.cpp.o


CMakeFiles/trem.dir/class/trem.cpp.o: CMakeFiles/trem.dir/flags.make
CMakeFiles/trem.dir/class/trem.cpp.o: ../class/trem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andre/Documentos/UDESC/MFO0001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/trem.dir/class/trem.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trem.dir/class/trem.cpp.o -c /home/andre/Documentos/UDESC/MFO0001/class/trem.cpp

CMakeFiles/trem.dir/class/trem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trem.dir/class/trem.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andre/Documentos/UDESC/MFO0001/class/trem.cpp > CMakeFiles/trem.dir/class/trem.cpp.i

CMakeFiles/trem.dir/class/trem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trem.dir/class/trem.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andre/Documentos/UDESC/MFO0001/class/trem.cpp -o CMakeFiles/trem.dir/class/trem.cpp.s

CMakeFiles/trem.dir/class/trem.cpp.o.requires:

.PHONY : CMakeFiles/trem.dir/class/trem.cpp.o.requires

CMakeFiles/trem.dir/class/trem.cpp.o.provides: CMakeFiles/trem.dir/class/trem.cpp.o.requires
	$(MAKE) -f CMakeFiles/trem.dir/build.make CMakeFiles/trem.dir/class/trem.cpp.o.provides.build
.PHONY : CMakeFiles/trem.dir/class/trem.cpp.o.provides

CMakeFiles/trem.dir/class/trem.cpp.o.provides.build: CMakeFiles/trem.dir/class/trem.cpp.o


CMakeFiles/trem.dir/class/redepetri.cpp.o: CMakeFiles/trem.dir/flags.make
CMakeFiles/trem.dir/class/redepetri.cpp.o: ../class/redepetri.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andre/Documentos/UDESC/MFO0001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/trem.dir/class/redepetri.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trem.dir/class/redepetri.cpp.o -c /home/andre/Documentos/UDESC/MFO0001/class/redepetri.cpp

CMakeFiles/trem.dir/class/redepetri.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trem.dir/class/redepetri.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andre/Documentos/UDESC/MFO0001/class/redepetri.cpp > CMakeFiles/trem.dir/class/redepetri.cpp.i

CMakeFiles/trem.dir/class/redepetri.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trem.dir/class/redepetri.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andre/Documentos/UDESC/MFO0001/class/redepetri.cpp -o CMakeFiles/trem.dir/class/redepetri.cpp.s

CMakeFiles/trem.dir/class/redepetri.cpp.o.requires:

.PHONY : CMakeFiles/trem.dir/class/redepetri.cpp.o.requires

CMakeFiles/trem.dir/class/redepetri.cpp.o.provides: CMakeFiles/trem.dir/class/redepetri.cpp.o.requires
	$(MAKE) -f CMakeFiles/trem.dir/build.make CMakeFiles/trem.dir/class/redepetri.cpp.o.provides.build
.PHONY : CMakeFiles/trem.dir/class/redepetri.cpp.o.provides

CMakeFiles/trem.dir/class/redepetri.cpp.o.provides.build: CMakeFiles/trem.dir/class/redepetri.cpp.o


CMakeFiles/trem.dir/class/pooltransicoes.cpp.o: CMakeFiles/trem.dir/flags.make
CMakeFiles/trem.dir/class/pooltransicoes.cpp.o: ../class/pooltransicoes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andre/Documentos/UDESC/MFO0001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/trem.dir/class/pooltransicoes.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trem.dir/class/pooltransicoes.cpp.o -c /home/andre/Documentos/UDESC/MFO0001/class/pooltransicoes.cpp

CMakeFiles/trem.dir/class/pooltransicoes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trem.dir/class/pooltransicoes.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andre/Documentos/UDESC/MFO0001/class/pooltransicoes.cpp > CMakeFiles/trem.dir/class/pooltransicoes.cpp.i

CMakeFiles/trem.dir/class/pooltransicoes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trem.dir/class/pooltransicoes.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andre/Documentos/UDESC/MFO0001/class/pooltransicoes.cpp -o CMakeFiles/trem.dir/class/pooltransicoes.cpp.s

CMakeFiles/trem.dir/class/pooltransicoes.cpp.o.requires:

.PHONY : CMakeFiles/trem.dir/class/pooltransicoes.cpp.o.requires

CMakeFiles/trem.dir/class/pooltransicoes.cpp.o.provides: CMakeFiles/trem.dir/class/pooltransicoes.cpp.o.requires
	$(MAKE) -f CMakeFiles/trem.dir/build.make CMakeFiles/trem.dir/class/pooltransicoes.cpp.o.provides.build
.PHONY : CMakeFiles/trem.dir/class/pooltransicoes.cpp.o.provides

CMakeFiles/trem.dir/class/pooltransicoes.cpp.o.provides.build: CMakeFiles/trem.dir/class/pooltransicoes.cpp.o


# Object files for target trem
trem_OBJECTS = \
"CMakeFiles/trem.dir/main.cpp.o" \
"CMakeFiles/trem.dir/class/threads/sema.cpp.o" \
"CMakeFiles/trem.dir/class/threads/task.cpp.o" \
"CMakeFiles/trem.dir/class/threads/taskparam.cpp.o" \
"CMakeFiles/trem.dir/class/threads/thread.cpp.o" \
"CMakeFiles/trem.dir/class/mapatrem.cpp.o" \
"CMakeFiles/trem.dir/class/draw.cpp.o" \
"CMakeFiles/trem.dir/class/linep.cpp.o" \
"CMakeFiles/trem.dir/class/path.cpp.o" \
"CMakeFiles/trem.dir/class/threadtest.cpp.o" \
"CMakeFiles/trem.dir/class/trem.cpp.o" \
"CMakeFiles/trem.dir/class/redepetri.cpp.o" \
"CMakeFiles/trem.dir/class/pooltransicoes.cpp.o"

# External object files for target trem
trem_EXTERNAL_OBJECTS =

trem: CMakeFiles/trem.dir/main.cpp.o
trem: CMakeFiles/trem.dir/class/threads/sema.cpp.o
trem: CMakeFiles/trem.dir/class/threads/task.cpp.o
trem: CMakeFiles/trem.dir/class/threads/taskparam.cpp.o
trem: CMakeFiles/trem.dir/class/threads/thread.cpp.o
trem: CMakeFiles/trem.dir/class/mapatrem.cpp.o
trem: CMakeFiles/trem.dir/class/draw.cpp.o
trem: CMakeFiles/trem.dir/class/linep.cpp.o
trem: CMakeFiles/trem.dir/class/path.cpp.o
trem: CMakeFiles/trem.dir/class/threadtest.cpp.o
trem: CMakeFiles/trem.dir/class/trem.cpp.o
trem: CMakeFiles/trem.dir/class/redepetri.cpp.o
trem: CMakeFiles/trem.dir/class/pooltransicoes.cpp.o
trem: CMakeFiles/trem.dir/build.make
trem: /usr/local/lib/libopencv_stitching.so.3.4.1
trem: /usr/local/lib/libopencv_superres.so.3.4.1
trem: /usr/local/lib/libopencv_videostab.so.3.4.1
trem: /usr/local/lib/libopencv_aruco.so.3.4.1
trem: /usr/local/lib/libopencv_bgsegm.so.3.4.1
trem: /usr/local/lib/libopencv_bioinspired.so.3.4.1
trem: /usr/local/lib/libopencv_ccalib.so.3.4.1
trem: /usr/local/lib/libopencv_dnn_objdetect.so.3.4.1
trem: /usr/local/lib/libopencv_dpm.so.3.4.1
trem: /usr/local/lib/libopencv_face.so.3.4.1
trem: /usr/local/lib/libopencv_freetype.so.3.4.1
trem: /usr/local/lib/libopencv_fuzzy.so.3.4.1
trem: /usr/local/lib/libopencv_hfs.so.3.4.1
trem: /usr/local/lib/libopencv_img_hash.so.3.4.1
trem: /usr/local/lib/libopencv_line_descriptor.so.3.4.1
trem: /usr/local/lib/libopencv_optflow.so.3.4.1
trem: /usr/local/lib/libopencv_reg.so.3.4.1
trem: /usr/local/lib/libopencv_rgbd.so.3.4.1
trem: /usr/local/lib/libopencv_saliency.so.3.4.1
trem: /usr/local/lib/libopencv_stereo.so.3.4.1
trem: /usr/local/lib/libopencv_structured_light.so.3.4.1
trem: /usr/local/lib/libopencv_surface_matching.so.3.4.1
trem: /usr/local/lib/libopencv_tracking.so.3.4.1
trem: /usr/local/lib/libopencv_xfeatures2d.so.3.4.1
trem: /usr/local/lib/libopencv_ximgproc.so.3.4.1
trem: /usr/local/lib/libopencv_xobjdetect.so.3.4.1
trem: /usr/local/lib/libopencv_xphoto.so.3.4.1
trem: /usr/local/lib/libopencv_shape.so.3.4.1
trem: /usr/local/lib/libopencv_photo.so.3.4.1
trem: /usr/local/lib/libopencv_datasets.so.3.4.1
trem: /usr/local/lib/libopencv_plot.so.3.4.1
trem: /usr/local/lib/libopencv_text.so.3.4.1
trem: /usr/local/lib/libopencv_dnn.so.3.4.1
trem: /usr/local/lib/libopencv_ml.so.3.4.1
trem: /usr/local/lib/libopencv_video.so.3.4.1
trem: /usr/local/lib/libopencv_calib3d.so.3.4.1
trem: /usr/local/lib/libopencv_features2d.so.3.4.1
trem: /usr/local/lib/libopencv_highgui.so.3.4.1
trem: /usr/local/lib/libopencv_videoio.so.3.4.1
trem: /usr/local/lib/libopencv_phase_unwrapping.so.3.4.1
trem: /usr/local/lib/libopencv_flann.so.3.4.1
trem: /usr/local/lib/libopencv_imgcodecs.so.3.4.1
trem: /usr/local/lib/libopencv_objdetect.so.3.4.1
trem: /usr/local/lib/libopencv_imgproc.so.3.4.1
trem: /usr/local/lib/libopencv_core.so.3.4.1
trem: CMakeFiles/trem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/andre/Documentos/UDESC/MFO0001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable trem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/trem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/trem.dir/build: trem

.PHONY : CMakeFiles/trem.dir/build

CMakeFiles/trem.dir/requires: CMakeFiles/trem.dir/main.cpp.o.requires
CMakeFiles/trem.dir/requires: CMakeFiles/trem.dir/class/threads/sema.cpp.o.requires
CMakeFiles/trem.dir/requires: CMakeFiles/trem.dir/class/threads/task.cpp.o.requires
CMakeFiles/trem.dir/requires: CMakeFiles/trem.dir/class/threads/taskparam.cpp.o.requires
CMakeFiles/trem.dir/requires: CMakeFiles/trem.dir/class/threads/thread.cpp.o.requires
CMakeFiles/trem.dir/requires: CMakeFiles/trem.dir/class/mapatrem.cpp.o.requires
CMakeFiles/trem.dir/requires: CMakeFiles/trem.dir/class/draw.cpp.o.requires
CMakeFiles/trem.dir/requires: CMakeFiles/trem.dir/class/linep.cpp.o.requires
CMakeFiles/trem.dir/requires: CMakeFiles/trem.dir/class/path.cpp.o.requires
CMakeFiles/trem.dir/requires: CMakeFiles/trem.dir/class/threadtest.cpp.o.requires
CMakeFiles/trem.dir/requires: CMakeFiles/trem.dir/class/trem.cpp.o.requires
CMakeFiles/trem.dir/requires: CMakeFiles/trem.dir/class/redepetri.cpp.o.requires
CMakeFiles/trem.dir/requires: CMakeFiles/trem.dir/class/pooltransicoes.cpp.o.requires

.PHONY : CMakeFiles/trem.dir/requires

CMakeFiles/trem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/trem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/trem.dir/clean

CMakeFiles/trem.dir/depend:
	cd /home/andre/Documentos/UDESC/MFO0001/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andre/Documentos/UDESC/MFO0001 /home/andre/Documentos/UDESC/MFO0001 /home/andre/Documentos/UDESC/MFO0001/build /home/andre/Documentos/UDESC/MFO0001/build /home/andre/Documentos/UDESC/MFO0001/build/CMakeFiles/trem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/trem.dir/depend

