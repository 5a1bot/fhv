#!/usr/bin/python
import sys
from var_dump import var_dump

#n = int (sys.argv[1])
#m = int (sys.argv[2])
arr = {1 : False, 2 : False, 3 : False, 4 : False, 5 : False, 6 : False, 7 : False }

n = 7
m = 4
marked = 0

j =0
while j < 6 :
    i = 1
   
    while i < m:
        
        print i,j
        if arr[i] == False:
            i = i + 1
        
        # print i, j
        
        j = j +1
	if j > n:
	    j = 1
        
            # print i ,j
        

    print marked			
    arr[j] = True
    marked = marked + 1

    print(marked)

var_dump(arr)
