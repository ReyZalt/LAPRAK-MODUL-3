total = int(input())

jam = total // 3600
sisa = total % 3600
menit = sisa // 60
detik = sisa % 60

if jam >= 24:
    hari = jam // 24
    jam = jam % 24
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")
