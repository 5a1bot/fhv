#!/usr/bin/python
import sys
from var_dump import var_dump


arr = {1 : False, 2 : False, 3 : False, 4 : False, 5 : False, 6 : False, 7 : False }


n = 7
m = 2

j = 1

mark = 0


while mark < n - 1:
    i = 0
    while i < m:
        if arr[j] == False:
            i = i + 1
        j = j + 1
        if j > n:
            j = 1
    print i, j
    mark = mark +1
    arr[j] = True
    var_dump(arr)

