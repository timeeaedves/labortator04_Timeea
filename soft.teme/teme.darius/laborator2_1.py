n=int(input("introduceti numarul de numere al sirului:"))
lista=[]
for _ in range(n):
    numar = int(input())
    lista.append(numar)
print(lista)
linii = int(input("introduceti numarul de linii:"))
coloane = int(input("introduceti numarul de coloane:"))

matrice=[]
print("introduceti elementele matricei:")
for i in range(linii):
    rand = []
    for j in range(coloane):
        numar = int(input(f"elementul [{i}[{j}]]"))
        rand.append(numar)
    matrice.append(rand)
print("\nMatricea este:")
for rand in matrice:
    for elem in rand:
        print(elem,end=" ")
    print()