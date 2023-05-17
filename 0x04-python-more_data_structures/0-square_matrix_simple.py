#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    if not matrix:
        return
    new_matrix = [[element ** 2 for element in row] for row in matrix]
    return new_matrix
