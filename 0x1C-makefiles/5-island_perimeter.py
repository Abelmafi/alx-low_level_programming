#!/usr/bin/python3
"""Define island_perimeter function"""


def island_perimeter(grid):
    """calculates perimeter of island list of list"""
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                try:
                    if grid[i - 1][j] == 0:
                        p += 1
                    if grid[i][j + 1] == 0:
                        p += 1
                    if grid[i][j - 1] == 0:
                        p += 1
                    if grid[i + 1][j] == 0:
                        p += 1
                except IndexError:
                        p += 1
    return (p)
