# Library Management Tool

## What it does
This is a console-based application I built in C to manage a collection of books cleanly. It lets you store essential details for each book—like the title, author, and its unique identification number—and allows you to look up any book instantly just by searching for its ID.

## Why I built this
I built this project to transition from dealing with loose, single variables to managing actual collections of records. Working on this helped me understand:
1. **Arrays of Structures:** How to create a structural template for a single book, and then stack them together in an array to create an in-memory database grid.
2. **Foundational Searching:** Writing a clean search loop from scratch to look through an array item-by-item until a target value is found.
3. **Safe String Manipulation:** Learning how to move text data safely into structure variables using standard library functions like `strcpy`.

## How it works (In Simple Terms)
- **Book Template (`struct`):** Combines different data fields (text strings for titles/authors and integers for IDs) into a single, unified "Book" profile.
- **In-Memory Storage:** Uses an array of these structures to keep track of the entire library shelf directly in the program's memory while running.
- **Linear Search Algorithm:** When you look up a book by its unique ID, the program loops through the array from the very first element to the last, comparing numbers until it finds the exact match.

## How to run it
1. Open your terminal or command prompt inside this project folder.
2. Compile the source file using a standard C compiler:
   gcc library.c -o library

3. Run the compiled executable:
   ./library

## Tech Used
- **Language:** C
- **Compiler:** GCC
- **Core Algorithms/Data Structures:** Arrays of Structures, Linear Search, and String Manipulation (`strcpy`)

## Author
Shafin Alam
GitHub: [shafinalam07](https://github.com/shafinalam07)
