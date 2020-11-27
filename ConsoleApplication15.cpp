 #include <iostream>

int main()
{
    const int n = 2;
    const int m = 3;
    int M[n][m] = { 0 };
    int w = 0, s = n, a = 0, d = m;
    int h = 0, l = 0;
    int i = 1;
    while (i < n * m) {
        while (l < d) {
            M[h][l] = i;
            ++l;
            ++i;
        }
        --l;
        ++w;
        while (h < s - 1) {
            ++h;
            M[h][l] = i;
            ++i;
        }
        --d;
        --s;
        while (l > a) {
            --l;
            M[h][l] = i;
            ++i;
        }
        ++a;
        while (h > w) {
            --h;
            M[h][l] = i;
            ++i;
        }
        ++l;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << M[i][j]<<" ";
        }
        std::cout <<std::endl;
    }
}

 