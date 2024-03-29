// created by @iceberga
#ifndef SRC_S21_MATRIX_OOP_H_
#define SRC_S21_MATRIX_OOP_H_

#include <cmath>
#include <iostream>

class S21Matrix {
 public:
  S21Matrix();
  ~S21Matrix() noexcept;
  S21Matrix(int rows, int cols);
  S21Matrix(const S21Matrix &other);
  S21Matrix(S21Matrix &&other) noexcept;

  bool EqMatrix(const S21Matrix &other) const noexcept;
  void SumMatrix(const S21Matrix &other);
  void SubMatrix(const S21Matrix &other);
  void MulNumber(const double num);
  void MulMatrix(const S21Matrix &other);
  S21Matrix Transpose() const noexcept;
  S21Matrix CalcComplements() const;
  double Determinant() const;
  S21Matrix InverseMatrix() const;

  bool SameMatrixSize(const S21Matrix &other) const noexcept;
  S21Matrix MinorMatrix(int rows, int cols) const;
  void FillMatrix(double num);
  bool CheckNullptr() noexcept;

  int GetRows() const noexcept;
  int GetCols() const noexcept;

  void SetRows(int rows);
  void SetCols(int cols);

  S21Matrix operator+(const S21Matrix &other);
  S21Matrix operator-(const S21Matrix &other);
  S21Matrix operator*(const S21Matrix &other);
  S21Matrix operator*(const double num);
  S21Matrix operator+=(const S21Matrix &other);
  S21Matrix operator-=(const S21Matrix &other);
  S21Matrix operator*=(const S21Matrix &other);
  S21Matrix operator*=(const double num) noexcept;
  S21Matrix &operator=(S21Matrix &&other);
  S21Matrix &operator=(S21Matrix &other);
  double &operator()(int rows, int cols);
  double operator()(int rows, int cols) const;
  bool operator==(const S21Matrix &other) const noexcept;

 private:
  int rows_, cols_;
  double **matrix_;
  void CreateMatrix() noexcept;
  void RemoveMatrix() noexcept;
  bool SquareMatrix() const noexcept;
  void CopyMatrix(const S21Matrix &other) noexcept;
  void MoveMatrix() noexcept;
};

#endif  // SRC_S21_MATRIX_OOP_H_
