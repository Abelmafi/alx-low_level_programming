#!/usr/bin/python3
"""Define island_perimeter function"""


def island_perimeter(grid):
    """calculates perimeter of island list of list"""
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i - 1 >= 0 and grid[i - 1][j] == 0:
                    p += 1
                if j + 1 < len(grid[i]) and grid[i][j + 1] == 0:
                    p += 1
                if j - 1 >= 0 and grid[i][j - 1] == 0:
                    p += 1
                if i + 1 < len(grid) and grid[i + 1][j] == 0:
                    p += 1
    return (p)
