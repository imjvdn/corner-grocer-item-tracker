# Corner Grocer Item Tracking Program

## Project Organization

This project is organized into a clean, professional directory structure:

```
CornerGrocerProject/
├── src/                    # Source code
│   └── main.cpp           # Main C++ program
├── data/                   # Data files
│   ├── CS210_Project_Three_Input_File.txt  # Input data
│   └── frequency.dat       # Generated backup file
├── docs/                   # Documentation
│   ├── README.md          # Technical documentation
│   └── Project_Submission_Summary.md  # Submission summary
├── build/                  # Build artifacts (auto-generated)
├── Makefile               # Build automation
└── README.md              # This file
```

## Quick Start

### Prerequisites
- GCC compiler (g++)
- Make utility

### Building the Program
```bash
# Build the program
make

# Or build and run in one command
make run
```

### Running the Program
```bash
# From project root
./build/grocery_tracker

# Or use the make target
make run
```

### Available Make Targets
- `make` or `make all` - Build the program
- `make run` - Build and run the program
- `make clean` - Remove build files
- `make distclean` - Remove build and data files
- `make install` - Copy executable to project root
- `make help` - Show all available targets

## Program Features

The Corner Grocer Item Tracking Program provides:

1. **Individual Item Search** - Find frequency of specific items
2. **Complete Frequency List** - View all items with purchase counts
3. **Histogram Visualization** - Visual representation using asterisks
4. **Automatic Data Backup** - Creates frequency.dat file
5. **Clean Exit** - Graceful program termination

## File Descriptions

### Source Code
- `src/main.cpp` - Complete C++ implementation with class-based design

### Data Files
- `data/CS210_Project_Three_Input_File.txt` - Sample grocery purchase data
- `data/frequency.dat` - Generated backup file (created on first run)

### Documentation
- `docs/README.md` - Comprehensive technical documentation
- `docs/Project_Submission_Summary.md` - Project submission summary

## Development

### Adding New Features
1. Modify `src/main.cpp`
2. Rebuild with `make`
3. Test with `make run`

### Code Organization
The program uses a `GroceryTracker` class with:
- **Private members**: Data storage and file handling
- **Public methods**: User interface and data access
- **Automatic initialization**: Loads data and creates backup on startup

## Testing

The program has been tested with:
- ✅ Valid item searches
- ✅ Non-existent item searches
- ✅ All menu options
- ✅ File I/O operations
- ✅ Error handling scenarios

## Submission

For project submission, include:
- All source files in `src/`
- All documentation in `docs/`
- Input data file in `data/`
- This README file

The program meets all functional requirements and demonstrates professional C++ programming practices.
