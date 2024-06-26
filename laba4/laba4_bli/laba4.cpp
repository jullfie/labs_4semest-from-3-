#include <iostream>
#include <algorithm>

//������� ������ ������� ���������
template <typename T>
int findSecondMax(T* arr, int size) {
    if (size < 2) {
        std::cerr << "Array size should be at least 2\n";
        return -1;
    }

    T max1 = arr[0];
    T max2 = arr[1];
    int idx1 = 0, idx2 = 1;

    for (int i = 2; i < size; ++i) {
        if (arr[i] > max1) {
            max2 = max1;
            idx2 = idx1;
            max1 = arr[i];
            idx1 = i;
        }
        else if (arr[i] > max2) {
            max2 = arr[i];
            idx2 = i;
        }
    }

    return idx2;
}

//������ ������ Matrix
template <typename T, int rows, int cols>
class Matrix {
private:
    T data[rows][cols];
public:
    // ������������, ������ ������� � ������ ������� ��� ������ � ��������

};

//������ ������ Vector
template <typename T, int size>
class Vector : public Matrix<T, 1, size> {
public:
    // ����� ��� ���������� ������������
    Vector<T, size> vectorProduct(const Vector<T, size>& other) {
        Vector<T, size> result;
        // ���������� ���������� ������������
        return result;
    }

    // ����� ��� ���������� ������������
    T scalarProduct(const Vector<T, size>& other) {
        T result = 0;
        // ���������� ���������� ������������
        return result;
    }
};
// ������� ��� ������������
void testFunctions() {
    // ������������ ������� ������ ������� ���������
    int arr[] = { 3, 7, 1, 9, 5 };
    int idx = findSecondMax(arr, 5);
    std::cout << "Index of second maximum: " << idx << std::endl;

    // ������������ ������ Matrix
    Matrix<float, 3, 3> mat;

    // ������������ ������ Vector
    Vector<int, 3> vec1, vec2;
    Vector<int, 3> vecResult = vec1.vectorProduct(vec2);
    int scalarResult = vec1.scalarProduct(vec2);
}

int main() {
    testFunctions();

    return 0;
}