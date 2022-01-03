//Лабороторная 4, задача 10. Выполнена: Михалевич М.П.
/*Построить магический квадрат любого порядка, используя любой алгоритм.
Выделение памяти через функции языка С.*/

#include <iostream>
#include <iomanip>

int input() {
    while (true) {
        int value;

        std::cin >> value;

        if (std::cin.fail() || value < 1) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Oшибка. Введите ещё раз: \n";
        }
        else {
            std::cin.ignore(32767, '\n');

            return value;
        }
    }
}

int main() {

    setlocale(LC_ALL, "ru");

    int n, i, j, m = 1, t, y, x, buff;

    std::cout << "Введите порядок магического квадрата: ";
    n = input();

    int** square;

    square = (int**)calloc(n, sizeof(*square));

    for (int i = 0; i < n; ++i) {
        square[i] = (int*)calloc(n, sizeof(*square[i]));
    }

    if (n == 2) {
        std::cout << "Магического квадрата не существует.";
    }
    else if (n == 1) {
        std::cout << "Магический квадрат:\n" << std::setw(3) << 1 << '\n';
    }
    else if (n % 2 == 1) {
        i = 0;
        j = (int)(n / 2); 

        square[i][j] = 1; 

        for (int z = 2; z < n * n + 1; z++) {
            if (i - 1 >= 0 && j - 1 >= 0 && square[i - 1][j - 1] == 0) {
                square[i - 1][j - 1] = z;
                i--;
                j--;
            }
            else if (i - 1 >= 0 && j - 1 >= 0 && square[i - 1][j - 1] != 0) {
                square[i + 1][j] = z;
                i++;
            }
            else if (i - 1 < 0 && j - 1 < 0 && square[n - 1][n - 1] != 0) {
                square[i + 1][j] = z;
                i++;
            }
            else if (i - 1 >= 0 && j - 1 < 0) {
                square[i - 1][n - 1] = z;
                i--;
                j = n - 1;
            }
            else if (i - 1 < 0 && j - 1 >= 0) {
                square[n - 1][j - 1] = z;
                i = n - 1;
                j--;
            }
        }
    }
    else if (n % 4 == 0) {
        int** square1;

        square1 = (int**)malloc(n * sizeof(int*));

        for (long long int i = 0; i < n; ++i) {
            square1[i] = (int*)malloc(n * sizeof(int));
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                square[i][j] = m;
                m++;
            }
        }

        m = n * n;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                square1[i][j] = m;
                m--;
            }
        }

        m = (n / 4) * (n / 4);

        t = 1;
        i = 0;
        j = 0;

        while (t < m + 1) {
            t++;

            y = i;
            x = j;

            while (y < i + 4) {
                square[y][x] = square1[y][x];
                y++;
                x++;
            }

            y = i + 3;
            x = j;

            while (x < i + 4) {
                square[y][x] = square1[y][x];
                y--;
                x++;
            }

            if (j + 4 < n) {
                j += 4;
            }
            else if (j + 4 >= n) {
                j = 0;
                i += 4;
            }
        }

        for (long long int i = 0; i < n; ++i) {
            free(square1[i]);
        }
        free(square1);

    }
    else {
        int length4 = n / 2;

        int** array1;
        array1 = (int**)calloc(length4, sizeof(*array1));
        int** array2;
        array2 = (int**)calloc(length4, sizeof(*array2));
        int** array3;
        array3 = (int**)calloc(length4, sizeof(*array3));
        int** array4;
        array4 = (int**)calloc(length4, sizeof(*array4));

        for (int i = 0; i < length4; ++i) {
            array1[i] = (int*)calloc(length4, sizeof(*array1[i]));
        }
        for (int i = 0; i < length4; ++i) {
            array2[i] = (int*)calloc(length4, sizeof(*array2[i]));
        }
        for (int i = 0; i < length4; ++i) {
            array3[i] = (int*)calloc(length4, sizeof(*array3[i]));
        }
        for (int i = 0; i < length4; ++i) {
            array4[i] = (int*)calloc(length4, sizeof(*array4[i]));
        }

        int max1 = n * n / 4;
        int max2 = n * n / 2;
        int max3 = n * n / 4 * 3;
        int max4 = n * n;

        int k = 1;

        i = 0;
        j = (int)(length4 / 2);
        array1[i][j] = 1;
        k++;

        while (k < max1 + 1) {
            if (i - 1 > -1 && j - 1 > -1 && array1[i - 1][j - 1] == 0) {
                array1[i - 1][j - 1] = k;
                i--;
                j--;
            }
            else if (i - 1 > -1 && j - 1 > -1 && array1[i - 1][j - 1] != 0 && i + 1 < length4) {
                array1[i + 1][j] = k;
                i++;
            }
            else if (i - 1 < 0 && j - 1 >= 0) {
                array1[length4 - 1][j - 1] = k;
                i = length4 - 1;
                j--;
            }
            else if (i - 1 >= 0 && j - 1 < 0) {
                array1[i - 1][length4 - 1] = k;
                j = length4 - 1;
                i--;
            }
            else if (i - 1 < 0 && j - 1 < 0 && array1[length4 - 1][length4 - 1] != 0 && i + 1 < length4) {
                array1[i + 1][j] = k;
                i++;
            }

            k++;
        }

        i = 0;
        j = (int)(length4 / 2);
        array4[i][j] = k;

        k++;

        while (k < max2 + 1) {
            if (i - 1 > -1 && j - 1 >= 0 && array4[i - 1][j - 1] == 0) {
                array4[i - 1][j - 1] = k;
                i--;
                j--;
            }
            else if (i - 1 >= 0 && j - 1 >= 0 && array4[i - 1][j - 1] != 0 && i + 1 < length4) {
                array4[i + 1][j] = k;
                i++;
            }
            else if (i - 1 < 0 && j - 1 >= 0) {
                array4[length4 - 1][j - 1] = k;
                i = length4 - 1;
                j--;
            }
            else if (i - 1 >= 0 && j - 1 < 0) {
                arayr4[i - 1][length4 - 1] = k;
                j = length4 - 1;
                i--;
            }
            else if (i - 1 < 0 && j - 1 < 0 && array4[length4 - 1][length4 - 1] != 0 && i + 1 < length4) {
                array4[i + 1][j] = k;
                i++;
            }

            k++;
        }

        i = 0;
        j = (int)(length4 / 2);
        array2[i][j] = k;

        k++;

        while (k < max3 + 1) {
            if (i - 1 >= 0 && j - 1 >= 0 && array2[i - 1][j - 1] == 0) {
                array2[i - 1][j - 1] = k;
                i--;
                j--;
            }
            else if (i - 1 >= 0 && j - 1 >= 0 && array2[i - 1][j - 1] != 0 && i + 1 < length4) {
                array2[i + 1][j] = k;
                i++;
            }
            else if (i - 1 < 0 && j - 1 >= 0) {
                array2[length4 - 1][j - 1] = k;
                i = length4 - 1;
                j--;
            }
            else if (i - 1 >= 0 && j - 1 < 0) {
                array2[i - 1][length4 - 1] = k;
                j = length4 - 1;
                i--;
            }
            else if (i - 1 < 0 && j - 1 < 0 && array2[length4 - 1][length4 - 1] != 0 && i + 1 < length4) {
                array2[i + 1][j] = k;
                i++;
            }

            k++;
        }

        i = 0;
        j = (int)(length4 / 2);
        array3[i][j] = k;

        k++;

        while (k < max4 + 1) {
            if (i - 1 >= 0 && j - 1 >= 0 && array3[i - 1][j - 1] == 0) {
                array3[i - 1][j - 1] = k;
                i--;
                j--;
            }
            else if (i - 1 >= 0 && j - 1 >= 0 && array3[i - 1][j - 1] != 0 && i + 1 < length4) {
                array3[i + 1][j] = k;
                i++;
            }
            else if (i - 1 < 0 && j - 1 >= 0) {
                array3[length4 - 1][j - 1] = k;
                i = length4 - 1;
                j--;
            }
            else if (i - 1 >= 0 && j - 1 < 0) {
                array3[i - 1][length4 - 1] = k;
                j = length4 - 1;
                i--;
            }
            else if (i - 1 < 0 && j - 1 < 0 && array3[length4 - 1][length4 - 1] != 0 && i + 1 < length4) {
                array3[i + 1][j] = k;
                i++;
            }

            k++;
        }

        buff = array1[0][0];
        array1[0][0] = array3[0][0];
        array3[0][0] = buff;

        y = 1; 

        while (y < length4 - 1) {
            buff = array1[y][1];
            array1[y][1] = array3[y][1];
            array3[y][1] = buff;

            y++;
        }

        k = (n - 2) / 4 - 1; 

        if (k > 0) {
            while (k > 0) {
                for (int i = 0; i < length4; ++i) {
                    buff = array1[i][length4 - k];
                    array1[i][length4 - k] = array3[i][length4 - k];
                    array3[i][length4 - k] = buff;

                    buff = array2[i][k - 1];
                    array2[i][k - 1] = array4[i][k - 1];
                    array4[i][k - 1] = buff;
                }

                k--;
            }
        }

        for (int i = 0; i < length4; ++i) {
            for (int j = 0; j < length4; ++j) {
                square[i][j] = array1[i][j];
                square[i][j + length4] = array2[i][j];
                square[i + length4][j] = array3[i][j];
                square[i + length4][j + length4] = array4[i][j];
            }
        }

        for (int i = 0; i < length4; ++i) {
            free(array1[i]);
        }
        free(array1);

        for (int i = 0; i < length4; ++i) {
            free(array2[i]);
        }
        free(array2);

        for (int i = 0; i < length4; ++i) {
            free(array3[i]);
        }
        free(array3);

        for (int i = 0; i < length4; ++i) {
            free(array4[i]);
        }
        free(array4);
    }


    if (n > 2) {
        std::cout << std::endl << "Магический квадрат:" << std::endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (n < 100) {
                    std::cout << std::setw(4) << square[i][j] << " ";
                }
                else {
                    std::cout << std::setw(10) << square[i][j] << " ";
                }
            }
            std::cout << std::endl;
        }
    }

    for (long long int i = 0; i < n; ++i) {
        free(square[i]);
    }
    free(square);
}
