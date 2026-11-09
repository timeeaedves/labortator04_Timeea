
def este_prim(n):
    if n < 2:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False

    for i in range(3, int(n**0.5) + 1, 2):
        if n % i == 0:
            return False

    return True

def descompune_in_doua_numere_prime(n):

    perechi = []

    for p in range(2, (n // 2) + 1):

        q = n - p

        if este_prim(p) and este_prim(q):
            perechi.append((p, q))

    return perechi
numar = int(input("Introduceti un numar par > 2: "))
if numar > 2 and numar % 2 == 0:

    termeni = descompune_in_doua_numere_prime(numar)

    if termeni:
        print("Descompunerile numarului", numar, "sunt:")

        for p, q in termeni:
            print(f"{numar} = {p} + {q}")

    else:
        print("Nu s-au gasit perechi de numere prime.")

else:
    print("Acest numar nu este valid! Introduceti un numar par mai mare decat 2.")
