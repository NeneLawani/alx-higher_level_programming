#!/usr/bin/python3

def print_sorted_dictionary(a_dictionary):
    ordered_keys = sorted(a_dictionary.items())
    for key, value in ordered_keys:
        print(f"{key}: {value}")
