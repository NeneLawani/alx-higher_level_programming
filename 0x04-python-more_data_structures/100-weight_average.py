#!/usr/bin/python3

def weight_average(my_list=[]):
    if not my_list:
        return 0
    total_sum, total_weight = 0, 0
    for i in range(len(my_list)):
        product = my_list[i][0] * my_list[i][1]
        total_sum += product
        total_weight += my_list[i][1]
    result = total_sum / total_weight
    return result
