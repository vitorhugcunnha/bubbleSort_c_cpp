# Bubble Sort in C and C++

This repository contains simple examples of the **Bubble Sort algorithm** implemented in both **C** and **C++**.  
The programs take a list of strings, display them in their original order, and then use the Bubble Sort algorithm to arrange them alphabetically.

---

## 📌 What is Bubble Sort?

Bubble Sort is one of the simplest sorting algorithms.  
It works by **repeatedly comparing adjacent elements** in an array or list and swapping them if they are in the wrong order.  

Although it is not the most efficient algorithm for large datasets, it is excellent for **learning how sorting algorithms work** because of its simplicity.

---

## 📂 Repository Structure

- `bubble_sort.cpp` → Bubble Sort implementation in **C++**  
- `bubble_sort.c` → Bubble Sort implementation in **C**

---

## 💻 Example in C++

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

using namespace std;

int main(){
    vector<string> data = {
        "Catatau", "Ze Comeia", "Xunda",
        "Gonzo", "Tiao Gaviao", "Mutle",
        "Pombo Dudley", "Capitao Caverna"
    };

    int x, y;
    string temp;

    system("cls");
    cout << "Original data in vector" << endl;
    cout << "------------------------" << endl;
    for(x = 0; x < data.size(); x++){
        cout << data[x] << endl;
    }

    // Bubble Sort
    for(x = 0; x < data.size(); x++){
        for(y = x + 1; y < data.size(); y++){
            if(data[x] > data[y]){
                temp = data[x];
                data[x] = data[y];
                data[y] = temp;
            }
        }
    }

    cout << endl << "Sorted data in vector" << endl;
    cout << "-------------------------" << endl;
    for(x = 0; x < data.size(); x++){
        cout << data[x] << endl;    
    }

    getch();
}
💻 Example in C
c
Copiar código
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define MAX_STRINGS 8
#define MAX_LEN 20

int main(){
    char data[MAX_STRINGS][MAX_LEN] = {
        "Catatau", "Ze Comeia", "Xunda",
        "Gonzo", "Tiao Gaviao", "Mutley",
        "Pombo Dudley", "Capitao Caverna"
    };
    int x, y;
    char temp[MAX_LEN];

    system("cls");
    printf("Original data in array\n");
    printf("------------------------\n");
    for(x = 0; x < MAX_STRINGS; x++){
        printf("%s\n", data[x]);
    }

    // Bubble Sort
    for(x = 0; x < MAX_STRINGS; x++){
        for(y = x + 1; y < MAX_STRINGS; y++){
            if(strcmp(data[x], data[y]) > 0){
                strcpy(temp, data[x]);
                strcpy(data[x], data[y]);
                strcpy(data[y], temp);
            }
        }
    }

    printf("\nSorted data in array\n");
    printf("------------------------\n");
    for(x = 0; x < MAX_STRINGS; x++){
        printf("%s\n", data[x]);
    }

    getch();
    return 0;
}
⚙️ Why use Bubble Sort?
✅ Easy to implement and understand.
✅ Good for teaching and learning recursion, loops, and array manipulation.
❌ Not efficient for large datasets (time complexity is O(n²)).

Bubble Sort is best for educational purposes and for sorting small lists.

🚀 How to Run
1. Install a C/C++ Compiler
Windows (MinGW + GCC)

Install MinGW and make sure gcc and g++ are in your PATH.
Link:
https://www.mingw-w64.org/ 

Linux / macOS

Already includes GCC. Just run:

bash
Copiar código
gcc --version
g++ --version
2. Compile and Run
For C++:

bash
Copiar código
g++ bubble_sort.cpp -o bubble_sort_cpp
./bubble_sort_cpp
For C:

bash
Copiar código
gcc bubble_sort.c -o bubble_sort_c
./bubble_sort_c
💡 Easier Alternative: DEV-C++
If you have difficulties installing compilers, you can use Dev-C++,
a lightweight IDE that comes with the compiler included.

Steps:
Install Dev-C++
Link:
https://www.embarcadero.com/br/free-tools/dev-cpp/free-download 

Open the .c or .cpp file in Dev-C++.

Press F11 (Compile & Run).

