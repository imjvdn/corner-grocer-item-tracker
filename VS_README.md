# Corner Grocer Project - Visual Studio Setup

## Opening in Visual Studio

1. **Open Visual Studio**
2. **File → Open → Project/Solution**
3. **Navigate to this folder and select `CornerGrocerProject.sln`**
4. **Click "Open"**

## Project Structure in Visual Studio

The solution will show:
- **Source Files** → `src/main.cpp` (main program)
- **Data Files** → `CS210_Project_Three_Input_File.txt` (input data)

## Building and Running

### Method 1: Using Visual Studio
1. **Build → Build Solution** (or press Ctrl+Shift+B)
2. **Debug → Start Debugging** (or press F5)
3. **Or Debug → Start Without Debugging** (or press Ctrl+F5)

### Method 2: Using Command Line
```cmd
# Navigate to project directory
cd CornerGrocerProject

# Build using MSBuild
msbuild CornerGrocerProject.sln

# Run the executable
.\Debug\CornerGrocerProject.exe
```

## Configuration Options

The project supports multiple configurations:
- **Debug|x86** - 32-bit debug build
- **Debug|x64** - 64-bit debug build  
- **Release|x86** - 32-bit release build
- **Release|x64** - 64-bit release build

## Program Features

1. **Menu Option 1** - Search for specific item frequency
2. **Menu Option 2** - Display all item frequencies
3. **Menu Option 3** - Show histogram visualization
4. **Menu Option 4** - Exit program

## Data Files

- **Input**: `data\CS210_Project_Three_Input_File.txt`
- **Output**: `data\frequency.dat` (created automatically)

## Troubleshooting

### Common Issues:

1. **"Cannot open input file"**
   - Ensure `CS210_Project_Three_Input_File.txt` is in the `data` folder
   - Check that the file path is correct

2. **Build errors**
   - Ensure you have Visual Studio 2022 with C++ workload installed
   - Try cleaning and rebuilding the solution

3. **Runtime errors**
   - Make sure you're running from the project directory
   - Check that all data files are present

## Project Requirements Met

✅ **Class with public/private sections** - `GroceryTracker` class  
✅ **Maps implementation** - `std::map<string, int>`  
✅ **Industry best practices** - Comments, naming conventions  
✅ **All menu options** - 1-4 fully implemented  
✅ **Data file creation** - Automatic `frequency.dat` backup  
✅ **Input validation** - Menu and file error handling  

## Submission

For submission, include:
- The entire `CornerGrocerProject` folder
- All `.sln`, `.vcxproj`, and `.vcxproj.filters` files
- Source code and data files
- Documentation

The project is ready to build and run in Visual Studio 2022!

