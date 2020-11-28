 #include <iostream>
 #include <ctime>

int main()
{
    srand(unsigned int (time));
    const int n = 3, m = 3;
    int M[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            M[i][j] = rand() % 100000;
        }
    }
    //Выравнивание по правому краю
    for (int i = 0; i < n; ++i) {
        int g = 0;
        for (int j = 0; j < n; ++j) {
    int p = 0,k = 0,l = 0;
    for (int i = 0; i < n; ++i) {
        if (p < M[i][g])p = M[i][g]; // p -наибольшее число в столбце g
    }
    while (p) {
        p /= 10;
        ++k;    // к -количество разрядов числа p
    }
    l = M[j][i];
    while (l) {
        l /= 10; // l - количество разрядов текущего числа
        ++p;    
    }
            std::cout << M[j][i];
            for (int i = 0; i <= k-p; ++i) {
                std::cout << " ";
            }
            ++g;
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    //Выравнивание по левому краю
    for (int i = 0; i < n; ++i) {
        int g = 0;
        for (int j = 0; j < n; ++j) {
            int p = 0, k = 0, l = 0;
            for (int i = 0; i < n; ++i) {
                if (p < M[i][g])p = M[i][g];// p -наибольшее число в столбце g
            }
            while (p) {
                p /= 10;
                ++k;    // к -количество разрядов числа p
            }
            l = M[j][i];
            while (l) {
                l /= 10;// l - количество разрядов текущего числа
                ++p;
            }

            for (int i = 0; i <= k - p; ++i) {
                std::cout << " ";
            }
            std::cout << M[j][i];
            ++g;
        }
        std::cout << std::endl;
    }
}

 