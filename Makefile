# Compiler
CXX = g++

# Directories
INCDIR = inc
SRCDIR = src
BINDIR = bin

# Files
TARGET = $(BINDIR)/studentApp
SRCS = $(SRCDIR)/main.cpp $(SRCDIR)/addData.cpp
OBJS = $(SRCS:.cpp=.o)

# Flags
CXXFLAGS = -I$(INCDIR) -Wall -Wextra -std=c++17

# Default target
all: $(TARGET)

# Link
$(TARGET): $(SRCS)
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Clean
clean:
	rm -rf $(BINDIR)