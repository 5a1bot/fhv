#!/usr/bin/python
import sys
from var_dump import var_dump

n = 7
m = 3


x = m
z = 1

arr = [1,2,3,4,5,6,7]

while len(arr) != 1:
    i = 0
    j = i +1
    l = len(arr)
    k = 0
    print("Durchlaufnummer: "), z
    print("Anzahl der elemte: "), l
    while i < l:
        if j % x == 0:
            print("Ausgeschieden"), arr[i]
            del(arr[i])
            k = k + 1
            x = m
            j = 0
        else:
            print i
            var_dump(arr)
            print arr[i]
        if i == l -1:
            l = len(arr)
            r = l % m
            print("Letztes Element in diesem Druchlauf"), r
            if r != 0:
                x = m -r
                print("Wert"), x
        i = i + 1
        j = j + 1
    z = z + 1
