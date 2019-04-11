#include <iostream>

using namespace std;

double **RequestAMatrix(int row, int col);
bool GetMatrix(double **mat, int row, int col);
bool SetMatrix(double **mat, int row, int col);
bool DeleteMatix(double **mat, int row);

int main()
{
    int m, n;

    cin >> m >> n;
    cout << m << " x " << n << endl;

    double **x = RequestAMatrix(m, n);
    if (x == NULL)
    {
        cout << "Empty pointer" << endl;
        return -1;
    }
    GetMatrix(x, m, n);
    SetMatrix(x, m, n);
    GetMatrix(x, m, n);

    DeleteMatix(x, m);

    return 0;
}

// Dynamic New a 2D-matrix
double **RequestAMatrix(int row, int col)
{
    double **x = new double *[row];
    if (x == NULL)
    {
        cout << "Can't new" << endl;
        return NULL;
    }

    for (int i = 0; i < row; i++)
    {
        x[i] = new double[col];
        if (x[i] == NULL)
        {
            cout << "Can't new" << endl;
            return NULL;
        }
        for (int j = 0; j < col; j++)
        {
            x[i][j] = 0;
        }
    }

    return x;
}

// Get a 2D-matrix
bool GetMatrix(double **mat, int row, int col)
{
    if (mat == NULL)
    {
        cout << "Empty mat" << endl;
        return false;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << mat[i][j] << "\t";
        cout << endl;
    }
    return true;
}

// Set a 2D-matrix
bool SetMatrix(double **mat, int row, int col)
{
    if (mat == NULL)
    {
        cout << "Empty mat" << endl;
        return false;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat[i][j] = 1 + j + col * i;
        }
    }
    return true;
}

// Delete a 2D-matrix
bool DeleteMatix(double **mat, int row)
{
    for (int i = 0; i < row; i++)
        delete[] mat[i];

    delete[] mat;
}
