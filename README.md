# HW1 – C++ Pointers and Dynamic Memory Management

## Course Information
- Course Code: BICT2203  
- Assignment: HW1  
- Topic: Pointers, Dynamic Memory, Arrays, Strings  
- Programming Language: C++  
- Standard: No STL (Manual Memory Management Only)

---

## 1. Project Overview

This project demonstrates fundamental C++ programming concepts with a strong focus on low-level memory management. It is designed to reinforce understanding of:

- Object-Oriented Programming (OOP)
- Dynamic memory allocation and deallocation
- Pointer manipulation (including double pointers)
- Multi-dimensional arrays using heap memory
- C-style string handling
- Memory functions such as memset and memcpy

The project consists of three independent problems, each targeting specific core programming concepts.

---

## 2. Project Structure

---

## 3. Problem Breakdown

---

### Problem 1 – Person Class Management System

#### Objective
To implement a `Person` class that stores and manages student information using encapsulation and object-oriented programming principles.

#### Key Features
- Class-based design
- Encapsulation of private data members
- Initialization of objects using member functions
- Getter functions for controlled data access
- Object swapping using a temporary object

#### Concepts Used
- Classes and Objects
- Encapsulation
- String manipulation (C-style strings)
- Pass-by-reference
- Object swapping logic

---

### Problem 2 – Seat Arrangement System

#### Objective
To design a dynamic 10x10 seating system using a two-dimensional array allocated in heap memory.

#### Key Features
- Dynamic allocation using int**
- Initialization using memset
- Deep copy using memcpy
- Independent backup system
- Row-wise analysis for maximum seat occupancy
- Safe memory deallocation

#### Concepts Used
- Dynamic 2D arrays
- Heap memory management
- Deep vs shallow copy
- Matrix traversal
- Memory functions (memset, memcpy)
- Pointer-to-pointer structures

---

### Problem 3 – Dynamic String Dictionary System

#### Objective
To implement a dynamic dictionary using char** without STL support.

#### Key Features
- Dynamic allocation of string array
- Word search functionality
- Word modification with reallocation
- Word deletion with shifting mechanism
- Complete memory cleanup

#### Concepts Used
- Double pointers (char**)
- Dynamic string allocation
- String manipulation (strlen, strcpy)
- Array shifting techniques
- Manual memory management

---

## 4. How to Compile and Run

Use the following commands:

### Compile:

---

## 5. Screenshots

All program outputs are included in the `Screenshots/` directory:

- problem1_output.png
- problem2_output.png
- problem3_output.png

These screenshots demonstrate correct program execution and expected output results.

---

## 6. Key Learning Outcomes

Through this assignment, the following skills were developed:

- Strong understanding of dynamic memory allocation in C++
- Practical use of pointers and double pointers
- Experience with manual memory management (new/delete)
- Understanding of deep copy vs shallow copy
- Proficiency in handling C-style strings
- Ability to design modular and structured programs

---

## 7. Author Information

- Student Name: ______________________  
- Student ID: ________________________  
- Institution: ________________________  

---

## 8. Conclusion

This project provides a strong foundation in low-level C++ programming concepts, focusing on memory control, pointer manipulation, and system-level thinking. It enhances understanding of how data is stored and managed internally within computer memory.

---

## 9. GitHub Repository

---

## 10. Notes

- No STL libraries were used as per assignment requirements.
- All memory allocations are manually managed and properly freed.
- Code is structured for readability, maintainability, and academic evaluation.
