# Soal 4: Ejaan bilangan cacah (maksimal 99)

a = int(input())

if a > 99:
    print("Anda Menginput Melebihi Limit Bilangan")
elif a == 0:
    print("Nol")
elif a <= 9:
    print("Satuan")
elif 11 <= a <= 19:
    print("Belasan")
else:
    print("Puluhan")
