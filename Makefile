# Corner Grocer Item Tracking Program Makefile

# Compiler settings
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -O2

# Directories
SRC_DIR = src
BUILD_DIR = build
DATA_DIR = data

# Source files
SOURCES = $(SRC_DIR)/main.cpp
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

# Target executable
TARGET = $(BUILD_DIR)/grocery_tracker

# Default target
all: $(TARGET)

# Build the executable
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

# Compile source files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean build files
clean:
	rm -rf $(BUILD_DIR)

# Clean everything including data files
distclean: clean
	rm -f $(DATA_DIR)/frequency.dat

# Install (copy executable to project root)
install: $(TARGET)
	cp $(TARGET) ./grocery_tracker

# Help target
help:
	@echo "Available targets:"
	@echo "  all       - Build the program (default)"
	@echo "  run       - Build and run the program"
	@echo "  clean     - Remove build files"
	@echo "  distclean - Remove build and data files"
	@echo "  install   - Copy executable to project root"
	@echo "  help      - Show this help message"

.PHONY: all run clean distclean install help
