

B = [[8, 3, 6],
     [2, 9, 4],
     [7, 5, 1]]


# 1. Afisarea matricei
print("1. Matricea:")
for linie in B:
    print(linie)


# 2. Elementul de pe prima linie, a doua coloana
print("2.", B[0][1])


# 3. Suma tuturor elementelor matricei
suma = 0

for linie in B:
    for element in linie:
        suma = suma + element

print("3. Suma tuturor elementelor:", suma)


# 4. Suma elementelor de pe diagonala principala
suma = B[0][0] + B[1][1] + B[2][2]

print("4. Diagonala principala:", suma)


# 5. Suma elementelor de pe diagonala secundara
suma = B[0][2] + B[1][1] + B[2][0]

print("5. Diagonala secundara:", suma)


# 6. Suma elementelor de pe fiecare linie
print("6. Suma pe fiecare linie:")

for linie in B:
    print(sum(linie))


# 7. Suma elementelor de pe fiecare coloana
print("7. Suma pe fiecare coloana:")

for j in range(3):
    suma = 0
    for i in range(3):
        suma = suma + B[i][j]
    print(suma)


# 8. Valoarea maxima din matrice
maxim = max(max(linie) for linie in B)

print("8. Maxim:", maxim)


# 9. Valoarea minima din matrice
minim = min(min(linie) for linie in B)

print("9. Minim:", minim)


# 10. Numararea elementelor pare
contor = 0

for linie in B:
    for element in linie:
        if element % 2 == 0:
            contor = contor + 1

print("10. Elemente pare:", contor)


# 11. Numararea elementelor impare
contor = 0

for linie in B:
    for element in linie:
        if element % 2 != 0:
            contor = contor + 1

print("11. Elemente impare:", contor)


# 12. Media aritmetica a elementelor
media = suma = 0

for linie in B:
    for element in linie:
        suma = suma + element

media = suma / 9

print("12. Media:", media)


# 13. Elementele mai mari decat 5
print("13. Elemente mai mari decat 5:")

for linie in B:
    for element in linie:
        if element > 5:
            print(element)


# 14. Suma elementelor deasupra diagonalei principale
suma = 0

for i in range(3):
    for j in range(3):
        if j > i:
            suma = suma + B[i][j]

print("14. Suma deasupra diagonalei:", suma)


# 15. Suma elementelor sub diagonala principala
suma = 0

for i in range(3):
    for j in range(3):
        if i > j:
            suma = suma + B[i][j]

print("15. Suma sub diagonala:", suma)
