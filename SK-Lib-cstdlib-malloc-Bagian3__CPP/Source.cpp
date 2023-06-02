#include <iostream> 
#include <stdlib.h> 
#include <conio.h>

using namespace std;

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    // deklaasi variabel
    int var_len = 7;

    // deklarasi variabel pointer
    int* ptr;

    // mengalokasikan memori ke variabel pointer menggunakan malloc()
    ptr = (int*)malloc(sizeof(int) * var_len);
    
    for (int i = 0; i < var_len; i++) {
        cout << "Enter a number : ";
        cin >> *(ptr + i);
    }
    
    cout << endl << "Entered elements are : " << endl;
    
    for (int i = 0; i < var_len; i++) {
        cout << *(ptr + i) << endl;
    }

    free(ptr);

    _getch();
    return 0;
}