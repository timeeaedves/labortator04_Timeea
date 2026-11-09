
n = 375

print("1. Baza 10:", format(n, 'd'))
print("Baza 2:", format(n, 'b'))
print("Baza 8:", format(n, 'o'))
print("Baza 16:", format(n, 'X'))


# 2. Afisarea numarului cu zecimale si in notatie stiintifica
n = 9876.54321

print("2. Doua zecimale: {:.2f}".format(n))
print("Trei zecimale: {:.3f}".format(n))
print("Notatie stiintifica: {:.3e}".format(n))


# 3. Numerele de la 10 la 25 in diferite baze
print("3. Decimal  Binar  Octal  Hexazecimal")

for n in range(10, 26):
    print(format(n, 'd'), format(n, 'b'),
          format(n, 'o'), format(n, 'X'))


# 4. Convertirea numarului real in intreg
n = 456.89
print("4.", int(n))


# 5. Convertirea textului in numar intreg
n = int("250")
print("5.", n + 75)


# 6. Convertirea numerelor din diferite baze
a = int("110101", 2)
b = int("247", 8)
c = int("BC", 16)

suma = a + b + c

print("6. Numere:", a, b, c)
print("Suma:", suma)


# 7. Suma si media elementelor listei
lista = [14, 18, 22, 26, 30]

suma = sum(lista)
media = suma / len(lista)

print("7. Suma:", suma)
print("Media:", media)


# 8. Minimul, maximul si sortarea listei
lista = [35, 12, 48, 7, 21]

print("8. Minim:", min(lista))
print("Maxim:", max(lista))
print("Lista sortata:", sorted(lista))


# 9. Adaugarea numarului 20 si eliminarea numarului 8
lista = [4, 8, 12, 16]

lista.append(20)
lista.remove(8)

print("9.", lista)


# 10. Numararea elementelor pare
lista = [5, 10, 13, 18, 22, 27, 30]

contor = 0

for n in lista:
    if n % 2 == 0:
        contor = contor + 1

print("10. Numarul elementelor pare:", contor)


# 11. Convertirea numerelor binare in zecimal
lista = ["1100", "10101", "11100", "10011"]

lista_zecimala = []

for n in lista:
    lista_zecimala.append(int(n, 2))

print("11. Lista zecimala:", lista_zecimala)
print("Suma:", sum(lista_zecimala))


# 12. Calcularea informatiilor despre lista de note
note = [8.5, 7.25, 9.75, 6.5, 10, 8]

media = sum(note) / len(note)
minim = min(note)
maxim = max(note)

contor = 0

for nota in note:
    if nota >= 8:
        contor = contor + 1

print("12. Media:", media)
print("Minim:", minim)
print("Maxim:", maxim)
print("Note >= 8:", contor)


# 13. Convertirea preturilor si reducerea de 10%
preturi = ["150.75", "220.50", "89.99"]

preturi_reale = []

for pret in preturi:
    preturi_reale.append(float(pret))

total = sum(preturi_reale)
reducere = total * 10 / 100
pret_final = total - reducere

print("13. Total:", total)
print("Reducere:", reducere)
print("Pret final:", round(pret_final, 2))


# 14. Convertirea numerelor in baza 10
a = int("110110", 2)
b = int("127", 8)
c = int("B5", 16)
d = int("200", 10)

lista = [a, b, c, d]

suma = sum(lista)
media = suma / len(lista)

print("14. Lista:", lista)
print("Suma:", suma)
print("Media:", media)
print("Minim:", min(lista))
print("Maxim:", max(lista))
print("Suma in binar:", format(suma, 'b'))
print("Suma in hexazecimal:", format(suma, 'X'))


# 15. Calcularea informatiilor despre lista
lista = [18, 7, 24, 11, 32, 15, 40]

suma = sum(lista)
media = suma / len(lista)

contor = 0

for n in lista:
    if n % 2 == 0:
        contor = contor + 1

lista_sortata = sorted(lista)

print("15. Suma:", suma)
print("Media:", media)
print("Minim:", min(lista))
print("Maxim:", max(lista))
print("Numarul elementelor pare:", contor)
print("Lista sortata:", lista_sortata)
print("Suma in binar:", format(suma, 'b'))
print("Suma in hexazecimal:", format(suma, 'X'))
