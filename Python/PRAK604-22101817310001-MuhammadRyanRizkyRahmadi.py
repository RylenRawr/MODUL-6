asli = input()
palsu = input()
code = len(asli)
pesan = len(palsu)
r = 0
y = 0
if len(asli) != len(palsu):
    print('Panjang kalimat berbeda, pesan palsu')
else:
    for i in range(len(asli)):
        if asli[i] == palsu[i]:
            print('*', end='')
            r+=1
        else:
            print('#', end='') 
            y+=1
    print('\n* = {}' .format(r))
    print('# = {}' .format(y))
    if r >= y:
        print('Pesan Asli')
    elif r < y:
        print('Pesan Palsu')