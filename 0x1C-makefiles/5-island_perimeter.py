#!/usr/bin/python3
""" find primeter of island  """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    """

    col = len(grid)
    row = len(grid[0])

    islands = 0
    neighbors = 0

    for i in range(col):
        for j in range(row):
            if grid[i][j] == 1:
                islands += 1
                if i + 1 < col and grid[i + 1][j] == 1:
                    neighbors += 1
                if j + 1 < row and grid[i][j + 1] == 1:
                    neighbors += 1

    return islands * 4 - neighbors * 2
