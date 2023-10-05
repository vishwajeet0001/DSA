
X = [[12,7,3],
    [4 ,5,6],
    [7 ,8,9]]

Y = [[5,8,1],
    [6,7,3],
    [4,5,9]]

resultadd = [[0,0,0],
         [0,0,0],   
         [0,0,0]]
resultsub = [[0,0,0],
         [0,0,0],
         [0,0,0]]
resultmulti = [[0,0,0],
         [0,0,0],
         [0,0,0]]
resulttrans = [[0,0,0],
         [0,0,0],
         [0,0,0]
         ]

# through rows
for i in range(len(Y)):
   # through columns
   for j in range(len(Y[0])):
       resultadd[i][j] = X[i][j] + Y[i][j]
       ################################################################
for i in range(len(Y)):
   
   for j in range(len(Y[0])):
       resultsub[i][j] = X[i][j] - Y[i][j]
#################################################33
for i in range(len(Y)):

   for j in range(len(X[0])):
       resultmulti[i][j] = X[i][j] * Y[i][j]
       #############################################
for i in range(len(X)):

    for j in range(len(X[0])):
        resulttrans[j][i] = X[i][j]
        ##############################################
print("addition of 2 matrices:")
for a in resultadd:
    print(a)
    
print("subtraction of 2 matrices:")     
for b in resultsub:   
    print(b)
print("multiplication of 2 matrices:")    
for c in resultmulti:
    print(c)

print("transpose of matrix:")  
for d in resulttrans:
     print(d)
    
