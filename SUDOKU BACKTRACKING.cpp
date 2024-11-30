#include <iostream>
#include <windows.h> 
#include <cstdlib>
using namespace std;

#define N 4
#define UNASSIGNED 0

// Untuk menemukan lokasi yang belum diisi
bool FindUnassignedLocation(int grid[N][N], int &row, int &col) {
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == UNASSIGNED)
                return true;
        }
    }
    return false;
}

// Untuk memeriksa apakah angka bisa ditempatkan di grid[baris][kolom]
bool isSafe(int grid[N][N], int row, int col, int num) {
	
    // Periksa baris
    for (int x = 0; x < N; x++)
        if (grid[row][x] == num)
            return false;

    // Periksa kolom
    for (int x = 0; x < N; x++)
        if (grid[x][col] == num)
            return false;

    // Periksa kotak 2x2
    int startRow = row - row % 2, startCol = col - col % 2;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            if (grid[i + startRow][j + startCol] == num)
                return false;

    return true;
}

// Untuk menampilkan grid 
void printGrid(int grid[N][N]) {
    system("cls");
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            cout << grid[row][col] << " ";
            if ((col + 1) % 2 == 0 && col != N - 1)
                cout << "| ";
        }
        std::cout << std::endl;
        if ((row + 1) % 2 == 0 && row != N - 1)
            cout << "----+----" << endl;
    }
    Sleep(1000);
}

// Untuk menyelesaikan Sudoku
bool SolveSudoku(int grid[N][N]) {
    int row, col;

    // Jika tidak ada lokasi yang tidak ditentukan, Sudoku telah selesai
    if (!FindUnassignedLocation(grid, row, col))
        return true;

    // Coba angka dari 1 sampai 4
    for (int num = 1; num <= 4; num++) {
        // Jika angka dapat ditempatkan di grid[baris][kolom]
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;
            printGrid(grid); // Tampilkan grid setelah mengisi angka

            // Rekursif untuk melanjutkan
            if (SolveSudoku(grid))
                return true;

            // Jika gagal, hapus angka dan coba angka lain (backtracking)
            grid[row][col] = UNASSIGNED;
            printGrid(grid); // Tampilkan grid setelah menghapus angka
        }
    }
    return false; // Trigger backtracking
}

int main() {
    int grid[N][N] = {
        {1, 0, 3, 0},
        {0, 0, 2, 1},
        {0, 1, 0, 2},
        {2, 4, 0, 2}
    };

    cout << "Grid Sudoku awal:\n";
    printGrid(grid);
    cout << "\nMenyelesaikan Sudoku...\n\n";

    if (SolveSudoku(grid)) {
        printGrid(grid);
        cout << "\n\nSudoku telah diselesaikan";
    } else {
        cout << "Tidak ada solusi yang tersedia";
    }

    return 0;
}

