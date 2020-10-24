import random

with open("teste.in", "x") as f:
    f.write("100000\n")
    for i in range(0,99998):
        f.write("1")
    f.write("00\n")
