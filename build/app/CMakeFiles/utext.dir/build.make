# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /Users/okolevatov/.brew/Cellar/cmake/3.18.2/bin/cmake

# The command to remove a file.
RM = /Users/okolevatov/.brew/Cellar/cmake/3.18.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/okolevatov/okolevatov/utext

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/okolevatov/okolevatov/utext/build

# Include any dependencies generated for this target.
include app/CMakeFiles/utext.dir/depend.make

# Include the progress variables for this target.
include app/CMakeFiles/utext.dir/progress.make

# Include the compile flags for this target's objects.
include app/CMakeFiles/utext.dir/flags.make

app/CMakeFiles/utext.dir/utext_autogen/mocs_compilation.cpp.o: app/CMakeFiles/utext.dir/flags.make
app/CMakeFiles/utext.dir/utext_autogen/mocs_compilation.cpp.o: app/utext_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/okolevatov/okolevatov/utext/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object app/CMakeFiles/utext.dir/utext_autogen/mocs_compilation.cpp.o"
	cd /Users/okolevatov/okolevatov/utext/build/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/utext.dir/utext_autogen/mocs_compilation.cpp.o -c /Users/okolevatov/okolevatov/utext/build/app/utext_autogen/mocs_compilation.cpp

app/CMakeFiles/utext.dir/utext_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utext.dir/utext_autogen/mocs_compilation.cpp.i"
	cd /Users/okolevatov/okolevatov/utext/build/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/okolevatov/okolevatov/utext/build/app/utext_autogen/mocs_compilation.cpp > CMakeFiles/utext.dir/utext_autogen/mocs_compilation.cpp.i

app/CMakeFiles/utext.dir/utext_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utext.dir/utext_autogen/mocs_compilation.cpp.s"
	cd /Users/okolevatov/okolevatov/utext/build/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/okolevatov/okolevatov/utext/build/app/utext_autogen/mocs_compilation.cpp -o CMakeFiles/utext.dir/utext_autogen/mocs_compilation.cpp.s

app/CMakeFiles/utext.dir/main.cpp.o: app/CMakeFiles/utext.dir/flags.make
app/CMakeFiles/utext.dir/main.cpp.o: ../app/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/okolevatov/okolevatov/utext/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object app/CMakeFiles/utext.dir/main.cpp.o"
	cd /Users/okolevatov/okolevatov/utext/build/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/utext.dir/main.cpp.o -c /Users/okolevatov/okolevatov/utext/app/main.cpp

app/CMakeFiles/utext.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utext.dir/main.cpp.i"
	cd /Users/okolevatov/okolevatov/utext/build/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/okolevatov/okolevatov/utext/app/main.cpp > CMakeFiles/utext.dir/main.cpp.i

app/CMakeFiles/utext.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utext.dir/main.cpp.s"
	cd /Users/okolevatov/okolevatov/utext/build/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/okolevatov/okolevatov/utext/app/main.cpp -o CMakeFiles/utext.dir/main.cpp.s

# Object files for target utext
utext_OBJECTS = \
"CMakeFiles/utext.dir/utext_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/utext.dir/main.cpp.o"

# External object files for target utext
utext_EXTERNAL_OBJECTS =

../utext: app/CMakeFiles/utext.dir/utext_autogen/mocs_compilation.cpp.o
../utext: app/CMakeFiles/utext.dir/main.cpp.o
../utext: app/CMakeFiles/utext.dir/build.make
../utext: app/src/libliba.a
../utext: /Users/okolevatov/.brew/opt/qt/lib/QtWidgets.framework/QtWidgets
../utext: /Users/okolevatov/.brew/opt/qt/lib/QtMultimedia.framework/QtMultimedia
../utext: /Users/okolevatov/.brew/opt/qt/lib/QtGui.framework/QtGui
../utext: /Users/okolevatov/.brew/opt/qt/lib/QtNetwork.framework/QtNetwork
../utext: /Users/okolevatov/.brew/opt/qt/lib/QtDBus.framework/QtDBus
../utext: /Users/okolevatov/.brew/opt/qt/lib/QtCore.framework/QtCore
../utext: app/CMakeFiles/utext.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/okolevatov/okolevatov/utext/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../utext"
	cd /Users/okolevatov/okolevatov/utext/build/app && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/utext.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
app/CMakeFiles/utext.dir/build: ../utext

.PHONY : app/CMakeFiles/utext.dir/build

app/CMakeFiles/utext.dir/clean:
	cd /Users/okolevatov/okolevatov/utext/build/app && $(CMAKE_COMMAND) -P CMakeFiles/utext.dir/cmake_clean.cmake
.PHONY : app/CMakeFiles/utext.dir/clean

app/CMakeFiles/utext.dir/depend:
	cd /Users/okolevatov/okolevatov/utext/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/okolevatov/okolevatov/utext /Users/okolevatov/okolevatov/utext/app /Users/okolevatov/okolevatov/utext/build /Users/okolevatov/okolevatov/utext/build/app /Users/okolevatov/okolevatov/utext/build/app/CMakeFiles/utext.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : app/CMakeFiles/utext.dir/depend

