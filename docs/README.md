# Corner Grocer Item Tracking Program

## Program Design and Functionality

### Overview
This C++ program analyzes grocery item purchase data to help Corner Grocer optimize their produce section layout. The program processes text records of items purchased throughout the day and provides frequency analysis through multiple menu options.

### Class Design
The program uses a `GroceryTracker` class with the following structure:

**Private Members:**
- `map<string, int> itemFrequency`: Stores item names and their purchase frequencies
- `string inputFileName`: Name of the input data file
- `string outputFileName`: Name of the backup output file

**Private Methods:**
- `loadData()`: Reads input file and populates the frequency map
- `createBackupFile()`: Creates frequency.dat backup file

**Public Methods:**
- `getItemFrequency()`: Returns frequency count for a specific item
- `displayAllFrequencies()`: Shows all items with their frequencies
- `displayHistogram()`: Creates visual histogram representation
- `searchItem()`: Handles user input for item searches
- `displayMenu()`: Shows program menu options
- `run()`: Main program loop

### Key Features

1. **Menu Option 1 - Individual Frequency Search**
   - Prompts user for specific item name
   - Returns exact frequency count
   - Handles case-sensitive matching

2. **Menu Option 2 - Complete Frequency List**
   - Displays all items with purchase counts
   - Formatted table output for readability
   - Sorted alphabetically by item name

3. **Menu Option 3 - Histogram Visualization**
   - Creates text-based histogram using asterisks
   - Each asterisk represents one purchase
   - Aligned formatting for easy reading

4. **Menu Option 4 - Program Exit**
   - Clean program termination
   - User-friendly exit message

5. **Automatic Data Backup**
   - Creates frequency.dat file on program start
   - Contains all item-frequency pairs
   - No user intervention required

### Technical Implementation

**Data Structure:**
- Uses `std::map<string, int>` for O(log n) lookup performance
- Automatically handles item sorting and deduplication
- Efficient memory usage for large datasets

**File Handling:**
- Robust error checking for file operations
- Graceful handling of missing input files
- Automatic backup file creation

**User Interface:**
- Clear menu system with numbered options
- Input validation for menu choices
- Proper input buffer management for string input

### Industry Best Practices Applied

1. **Class-Based Design**
   - Encapsulation with private/public members
   - Single responsibility principle
   - Clean separation of concerns

2. **Code Documentation**
   - Comprehensive inline comments
   - Clear method and variable naming
   - Self-documenting code structure

3. **Error Handling**
   - File operation error checking
   - Input validation
   - Graceful error recovery

4. **Performance Optimization**
   - Efficient map-based lookups
   - Minimal memory allocation
   - Optimized file I/O operations

### Sample Output

**Menu Option 2 Example:**
```
=== ALL ITEM FREQUENCIES ===
Item           Frequency
-------------------------
Apples         3
Beets          3
Broccoli       6
Cantaloupe     2
Cauliflower    6
Celery         5
Cranberries    12
Cucumbers      8
Garlic         8
Limes          1
Onions         3
Peaches        4
Pears          1
Peas           8
Potatoes       4
Pumpkins       2
Radishes       3
Spinach        4
Yams           5
Zucchini       10
```

**Menu Option 3 Example:**
```
=== ITEM FREQUENCY HISTOGRAM ===
Apples         ***
Beets          ***
Broccoli       ******
Cantaloupe     **
Cauliflower    ******
Celery         *****
Cranberries    ************
Cucumbers      ********
Garlic         ********
Limes          *
Onions         ***
Peaches        ****
Pears          *
Peas           ********
Potatoes       ****
Pumpkins       **
Radishes       ***
Spinach        ****
Yams           *****
Zucchini       **********
```

### Compilation and Usage

1. Ensure `CS210_Project_Three_Input_File.txt` is in the same directory
2. Compile with: `g++ -o grocery_tracker main.cpp`
3. Run with: `./grocery_tracker`
4. Follow menu prompts for program interaction

The program automatically creates a `frequency.dat` backup file containing all item frequencies for data preservation.
