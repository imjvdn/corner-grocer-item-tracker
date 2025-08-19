# Corner Grocer Item Tracking Program

## Project Overview

The Corner Grocer Item Tracking Program is a C++ application designed to analyze grocery purchase data and provide frequency analysis to help optimize produce section layout. The program processes text records of items purchased throughout the day and offers multiple analytical views through an intuitive menu-driven interface.

### Problem Solved
Corner Grocer needed a solution to analyze customer purchase patterns to optimize their produce section layout. The program processes chronological purchase data and provides insights into item popularity, enabling data-driven decisions for store layout optimization.

## Key Features

- **Individual Item Search**: Find frequency of specific grocery items
- **Complete Frequency Analysis**: View all items with purchase counts
- **Visual Histogram**: Graphical representation using asterisks
- **Automatic Data Backup**: Creates frequency.dat file for data preservation
- **Robust Error Handling**: Validates input and handles file operations gracefully

## Technical Implementation

### Architecture
- **Class-based Design**: `GroceryTracker` class with proper encapsulation
- **Data Structure**: `std::map<string, int>` for efficient O(log n) lookups
- **File I/O**: Automatic data loading and backup file creation
- **Cross-platform**: Supports both Windows and Unix path conventions

### Code Quality
- **C++17 Standards**: Modern C++ features and best practices
- **Professional Documentation**: Comprehensive inline comments
- **Error Handling**: Robust validation and graceful error recovery
- **Memory Management**: Efficient data structures and proper resource management

## Project Structure

```
CornerGrocerProject/
├── src/main.cpp                    # Main C++ implementation
├── data/                           # Data files
│   └── CS210_Project_Three_Input_File.txt
├── docs/                           # Documentation
├── CornerGrocerProject.sln         # Visual Studio solution
├── CornerGrocerProject.vcxproj     # Visual Studio project
└── README.md                       # This file
```

## Building and Running

### Visual Studio
1. Open `CornerGrocerProject.sln`
2. Build Solution (Ctrl+Shift+B)
3. Run (Ctrl+F5)

### Command Line
```bash
g++ -std=c++17 -o grocery_tracker src/main.cpp
./grocery_tracker
```

## Portfolio Reflection

### What I Did Particularly Well

I successfully implemented a complete, production-ready C++ application that demonstrates mastery of object-oriented programming principles. The code showcases proper class design with encapsulation, efficient data structures using `std::map`, and comprehensive error handling. I maintained professional coding standards throughout, including clear variable naming, extensive inline documentation, and modular function design. The program exceeds requirements by implementing input validation, cross-platform compatibility, and automatic data backup functionality.

### Areas for Enhancement

The code could be enhanced by implementing unit tests using a framework like Google Test, adding configuration file support for customizable settings, and implementing a more sophisticated user interface. Performance could be improved by adding multi-threading for large datasets and implementing caching mechanisms. Security enhancements could include input sanitization and file permission validation. These improvements would make the code more robust, maintainable, and suitable for enterprise environments.

### Most Challenging Aspects

The most challenging aspect was designing the class architecture to balance encapsulation with functionality. I overcame this by carefully planning the public interface and ensuring each method had a single responsibility. The file path handling for cross-platform compatibility required research into Windows vs Unix path conventions. I utilized C++ documentation, Stack Overflow for specific syntax questions, and Visual Studio's debugging tools to resolve compilation issues. These resources have become valuable additions to my development toolkit.

### Transferable Skills

This project developed several highly transferable skills: object-oriented design principles that apply to any programming language, efficient algorithm design using appropriate data structures, professional documentation practices, and systematic debugging approaches. The experience with Visual Studio project management and build systems is directly applicable to enterprise development environments. The problem-solving methodology of breaking complex requirements into manageable components is essential for any software development role.

### Maintainability and Readability

I ensured maintainability through comprehensive inline comments explaining complex logic, consistent naming conventions following C++ standards, and modular function design with single responsibilities. The code is adaptable through configuration variables for file paths, clear separation of concerns between data processing and user interface, and extensible class design that could easily accommodate additional features. The use of modern C++17 features and industry-standard practices makes the code accessible to other developers and future-proof for maintenance.

## Technologies Used

- **C++17**: Modern C++ features and standards
- **Visual Studio 2022**: IDE and build system
- **STL Containers**: `std::map`, `std::string`, `std::vector`
- **File I/O**: `std::ifstream`, `std::ofstream`
- **Object-Oriented Design**: Classes, encapsulation, inheritance

## Learning Outcomes

This project solidified my understanding of C++ programming fundamentals, object-oriented design principles, and professional software development practices. I gained practical experience with Visual Studio project management, debugging techniques, and documentation standards. The project demonstrates my ability to translate business requirements into functional software solutions while maintaining code quality and professional standards.

---

*This project was completed as part of CS 210 - Programming Languages at Southern New Hampshire University.*
