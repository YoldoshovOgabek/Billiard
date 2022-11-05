n=int(input())
matrix=[[0 for i in range(n)] for j in range(n)]
print()
son = 1
ongga = 0; chapga = n-1; pastga = n-1; tepaga = 0

for i in range(n//2):
    for j in range(ongga,pastga):
        matrix[ongga][j] = son
        son+=1
    for j in range(tepaga,chapga):
        matrix[j][pastga] = son
        son+=1
    for j in range(chapga,tepaga,-1):
        matrix[chapga][j] = son
        son+=1
    for j in range(pastga,ongga,-1):
        matrix[j][tepaga] = son
        son+=1
    ongga+=1; chapga-=1; pastga-=1; tepaga+=1

if n%2==1:
    matrix[n//2][n//2] = n**2

for i in matrix:
    print(*i)
