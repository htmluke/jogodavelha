# useful Variables

BLDDIR = objects
SRCDIR = src
INCDIR = include

CC = g++
SRCEXT = cpp
SOURCES = $(shell find $(SRCDIR) -type f -name "*.$(SRCEXT)")
OBJECTS := $(patsubst $(SRCDIR)/%,$(BLDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS = -Iinclude
TARGET = exe

# phony targets ("recipes" to be executed) 

.PHONY: all, build, clean, folders

# the command "make" will build everything that's in build target

all: build

# "make build" will build all modules

build: folders exe

# "make clean" will delete the objects folder and the executable
# created by "make build" (if it already exists)
# also, the -r flag makes the remove command delete the files
# and their content recursively, while -f will force it to
# ignore nonexistent files and arguments

clean:
	rm -rf $(BLDDIR)
	rm -f $(TARGET)

# "make folders" will create the directory where the compiled
# objects will go to

folders:
	mkdir -p $(BLDDIR)

# the next targets are referring to the compilation process 
# of the all .c files

$(BLDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	$(CC) -c -o $@ $< $(CFLAGS)

# this target has the instructions needed for the compilation
# of all the objects previously compiled

$(TARGET): $(OBJECTS)
	$(CC) $^ -o $@ $(CFLAGS)
