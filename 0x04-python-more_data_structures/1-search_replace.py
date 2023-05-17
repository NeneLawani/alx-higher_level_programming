#!/usr/bin/python3

def search_replace(my_list, search, replace):
    if not my_list:
        return
    new_list = [replace if num == search else num for num in my_list]
    return new_list
