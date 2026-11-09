try:
    f=open("laborator2s.txt", "r")
    continut=f.read()
    f.close()
    print(continut)
except:
    print("Fisierul nu exista")
