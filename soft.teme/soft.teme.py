
a = 25
b = 17

print("1. Suma:", a + b)
print("Diferenta:", a - b)
print("Produsul:", a * b)
print("Impartirea:", a / b)


# 2. Media aritmetica a trei numere
a = 5
b = 7
c = 9

media = (a + b + c) / 3
print("2. Media:", media)


# 3. Aria si perimetrul unui dreptunghi
lungime = 12
latime = 5

aria = lungime * latime
perimetru = 2 * (lungime + latime)

print("3. Aria:", aria)
print("Perimetrul:", perimetru)


# 4. Aria si perimetrul unui patrat
latura = 6

aria = latura * latura
perimetru = 4 * latura

print("4. Aria:", aria)
print("Perimetrul:", perimetru)


# 5. Suma elementelor unui vector cu 7 elemente
v = [2, 4, 6, 8, 10, 12, 14]

print("5. Suma vectorului:", sum(v))


# 6. Cel mai mic si cel mai mare element
print("6. Elementul minim:", min(v))
print("Elementul maxim:", max(v))


# 7. Media aritmetica a elementelor vectorului
media = sum(v) / len(v)

print("7. Media vectorului:", media)


# 8. Afisarea unei matrice cu 3 linii si 3 coloane
A = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]

print("8. Matricea:")
for linie in A:
    print(linie)


# 9. Suma tuturor elementelor matricei
suma = 0

for linie in A:
    for element in linie:
        suma = suma + element

print("9. Suma matricei:", suma)


# 10. Patratul numarului 5
a = 5

patrat = a * a

print("10. Patratul:", patrat)


# 11. Suma elementelor de pe diagonala secundara
A = [[2, 2],
     [4, -3]]

suma = A[0][1] + A[1][0]

print("11. Suma diagonalei secundare:", suma)
