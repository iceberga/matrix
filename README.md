# matrix
Implementation of matrix lib in C++

Implement constructors and destructors:
1. S21Matrix() - a basic constructor that initialises a matrix of some predefined dimension
2. S21Matrix(int rows, int cols) - parametrized constructor with number of rows and columns
3. S21Matrix(const S21Matrix& other) - copy constructor
4. S21Matrix(S21Matrix&& other) - move constructor
5. ~S21Matrix() - destructor

Overload the following operators:
1. + - addition of two matrices
2. - - subtraction of one matrix from another
3. * - matrix multiplication and matrix multiplication by a number
4. == - checks for matrices equality (EqMatrix)
5. = - assignment of values from one matrix to another one
6. += - addition assignment (SumMatrix)
7. -= - difference assignment (SubMatrix)
8. *= - multiplication assignment (MulMatrix/MulNumber)
9. (int i, int j) - indexation by matrix elements (row, column)

Matrix operations:
1. bool EqMatrix(const S21Matrix& other) - checks matrices for equality with each other
2. void SumMatrix(const S21Matrix& other) - adds the second matrix to the current one
3. void SubMatrix(const S21Matrix& other) - subtracts another matrix from the current one
4. void MulNumber(const double num) - multiplies the current matrix by a number
5. void MulMatrix(const S21Matrix& other) - multiplies the current matrix by the second matrix
6. S21Matrix Transpose() - creates a new transposed matrix from the current one and returns it
7. S21Matrix CalcComplements() - calculates the algebraic addition matrix of the current one and returns it
8. double Determinant() - calculates and returns the determinant of the current matrix
9. S21Matrix InverseMatrix() - calculates and returns the inverse matrix
