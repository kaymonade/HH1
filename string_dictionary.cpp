#include <iostream>
#include <cstring>
using namespace std;

// Print all words in the dictionary
void printList(char **list, int count)
{
    cout << "Current Word List:" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << i << " : " << list[i] << endl;
    }
    cout << endl;
}

// Search for a word
int searchWord(char **list, int count, const char target[])
{
    for (int i = 0; i < count; i++)
    {
        if (strcmp(list[i], target) == 0)
        {
            return i;
        }
    }
    return -1;
}

// Modify a word at a given index
void modifyWord(char **list, int index, const char newWord[])
{
    delete[] list[index];

    list[index] = new char[strlen(newWord) + 1];
    strcpy(list[index], newWord);
}

// Delete a word and shift remaining words left
void deleteWord(char **list, int &count, const char target[])
{
    int index = searchWord(list, count, target);

    if (index == -1)
    {
        cout << "'" << target << "' not found.\n" << endl;
        return;
    }

    delete[] list[index];

    for (int i = index; i < count - 1; i++)
    {
        list[i] = list[i + 1];
    }

    count--;
}

// Free all allocated memory
void freeMemory(char **list, int count)
{
    for (int i = 0; i < count; i++)
    {
        delete[] list[i];
    }

    delete[] list;
}

int main()
{
    const int SIZE = 5;
    int count = SIZE;

    // Create list of 5 word pointers
    char **list = new char*[SIZE];

    // Original words
    const char *words[SIZE] =
    {
        "alpha",
        "bravo",
        "charlie",
        "delta",
        "echo"
    };

    // Allocate memory for each word
    for (int i = 0; i < SIZE; i++)
    {
        list[i] = new char[strlen(words[i]) + 1];
        strcpy(list[i], words[i]);
    }

    // ==========================================
    // 1. Print Initial List
    // ==========================================
    cout << "========== Initial Dictionary ==========\n";
    printList(list, count);

    // ==========================================
    // 2. Search for "delta"
    // ==========================================
    cout << "========== Search Result ==========\n";
    int foundIndex = searchWord(list, count, "delta");

    if (foundIndex != -1)
    {
        cout << "'delta' found at index: " << foundIndex << endl;
    }
    else
    {
        cout << "'delta' not found." << endl;
    }

    cout << endl;

    // ==========================================
    // 3. Modify index 1: bravo -> blueberry
    // ==========================================
    cout << "========== After Modification ==========\n";
    modifyWord(list, 1, "blueberry");
    printList(list, count);

    // ==========================================
    // 4. Delete "charlie"
    // ==========================================
    cout << "========== After Deletion ==========\n";
    deleteWord(list, count, "charlie");
    printList(list, count);

    // ==========================================
    // Free Memory
    // ==========================================
    freeMemory(list, count);

    cout << "All dynamic memory released successfully." << endl;

    return 0;
}