#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

// -------------------------------------------------------
// Print seat matrix
// -------------------------------------------------------
void print_seat(int **seat, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(2) << setfill('0') << seat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// -------------------------------------------------------
// Main Function
// -------------------------------------------------------
int main()
{
    const int ROW = 10;
    const int COL = 10;

    // ===================================================
    // 1. Dynamically allocate original seat map
    // ===================================================
    int **seat = new int*[ROW];

    for (int i = 0; i < ROW; i++)
    {
        seat[i] = new int[COL];
        memset(seat[i], 0, sizeof(int) * COL);
    }

    // Assign seat values
    seat[0][0] = 11;
    seat[0][3] = 24;
    seat[1][1] = 35;
    seat[2][5] = 47;
    seat[3][3] = 58;
    seat[4][9] = 69;
    seat[5][0] = 70;
    seat[5][5] = 81;
    seat[5][9] = 92;
    seat[6][4] = 13;
    seat[7][7] = 26;
    seat[8][2] = 39;
    seat[9][9] = 44;

    cout << "========== Original Seat Map ==========\n";
    print_seat(seat, ROW, COL);

    // ===================================================
    // 2. Create backup and copy using memcpy
    // ===================================================
    int **backup = new int*[ROW];

    for (int i = 0; i < ROW; i++)
    {
        backup[i] = new int[COL];
        memcpy(backup[i], seat[i], sizeof(int) * COL);
    }

    cout << "========== Backup Seat Map ==========\n";
    print_seat(backup, ROW, COL);

    // ===================================================
    // 3. Clear row 5 in original only
    // ===================================================
    memset(seat[5], 0, sizeof(int) * COL);

    cout << "========== Original After Clearing Row 5 ==========\n";
    print_seat(seat, ROW, COL);

    cout << "========== Backup Remains Unchanged ==========\n";
    print_seat(backup, ROW, COL);

    // ===================================================
    // 4. Find row with most assigned seats in backup
    // ===================================================
    int maxRow = 0;
    int maxCount = 0;

    for (int i = 0; i < ROW; i++)
    {
        int currentCount = 0;

        for (int j = 0; j < COL; j++)
        {
            if (backup[i][j] != 0)
            {
                currentCount++;
            }
        }

        if (currentCount > maxCount)
        {
            maxCount = currentCount;
            maxRow = i;
        }
    }

    cout << "========== Analysis ==========\n";
    cout << "Row with largest assigned seats : " << maxRow << endl;
    cout << "Number of assigned seats       : " << maxCount << endl;
    cout << endl;

    // ===================================================
    // 5. Free all memory
    // ===================================================
    for (int i = 0; i < ROW; i++)
    {
        delete[] seat[i];
        delete[] backup[i];
    }

    delete[] seat;
    delete[] backup;

    cout << "All dynamic memory released successfully." << endl;

    return 0;
}