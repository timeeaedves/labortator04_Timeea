
v = [5, 10, 15, 20, 25]

B = [[3, 6, 9],
     [2, 5, 8],
     [1, 4, 7]]


# 1. Afisarea vectorului
print("1. Vectorul:")
print(v)


# 2. Al doilea si ultimul element
print("2. Al doilea element:", v[1])
print("Ultimul element:", v[-1])


# 3. Suma elementelor vectorului
suma = sum(v)

print("3. Suma:", suma)


# 4. Media aritmetica
media = sum(v) / len(v)

print("4. Media:", media)


# 5. Valoarea minima si maxima
print("5. Minim:", min(v))
print("Maxim:", max(v))


# 6. Inmultirea elementelor cu 3
v_nou = []

for element in v:
    v_nou.append(element * 3)

print("6. Vector inmultit cu 3:", v_nou)


# 7. Sortarea descrescatoare
v.sort(reverse=True)

print("7. Vector sortat descrescator:", v)


# 8. Afisarea matricei B
print("8. Matricea B:")

for linie in B:
    print(linie)


# 9. Elementul de pe linia 2, coloana 3
print("9. Elementul:", B[1][2])


# 10. Suma tuturor elementelor matricei
suma = 0

for linie in B:
    for element in linie:
        suma = suma + element

print("10. Suma matricei:", suma)


# 11. Suma elementelor de pe fiecare linie
print("11. Suma pe fiecare linie:")

for linie in B:
    print(sum(linie))


# 12. Suma elementelor de pe fiecare coloana
print("12. Suma pe fiecare coloana:")

for j in range(3):
    suma = 0
    for i in range(3):
        suma = suma + B[i][j]
    print(suma)


# 13. Minim si maxim din matrice
minim = min(min(linie) for linie in B)
maxim = max(max(linie) for linie in B)

print("13. Minim:", minim)
print("Maxim:", maxim)


# 14. Suma diagonalei principale
suma = B[0][0] + B[1][1] + B[2][2]

print("14. Suma diagonalei principale:", suma)


# 15. Transpusa matricei B
print("15. Transpusa matricei:")

for j in range(3):
    for i in range(3):
        print(B[i][j], end=" ")
    print()
