#pragma once
#include <iostream>
using namespace std;

//Функция подсчета положительных элементов
int CalcPositiveNumbers(int* arr, int size) {
    int positive = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            positive++;
        }
    }

    return positive;
}
//Функция подсчета отрицательных элементов
int CalcNegativeNumbers(int* arr, int size) {
    int negative = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            negative++;
        }
    }

    return negative;
}
//Функция подсчета элементов нуля
int CalcZeros(int* arr, int size) {
    int zero = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            zero++;
        }
    }

    return zero;
}
//Функция удаления из массива положительных элементов
int* CopyPositiveNumbers(int* arr, int size, int& new_size) {
    new_size = CalcPositiveNumbers(arr, size);
    int* positives = new int[new_size];

    for (int i = 0, j = 0; i < size; ++i) {
        if (arr[i] > 0) {
            positives[j] = arr[i];
            j++;
        }
    }

    return positives;
}
//Функция удаления из массива отрицательных элементов
int* CopyNegativeNumbers(int* arr, int size, int& new_size) {
    new_size = CalcNegativeNumbers(arr, size);
    int* negatives = new int[new_size];

    for (int i = 0, j = 0; i < size; ++i) {
        if (arr[i] < 0) {
            negatives[j] = arr[i];
            j++;
        }
    }

    return negatives;
}
//Функция удаления из массива элементов нуля
int* CopyZeros(int* arr, int size, int& new_size) {
    new_size = CalcZeros(arr, size);
    int* zeros = new int[new_size];

    for (int i = 0, j = 0; i < size; ++i) {
        if (arr[i] == 0) {
            zeros[j] = arr[i];
            j++;
        }
    }

    return zeros;
}
