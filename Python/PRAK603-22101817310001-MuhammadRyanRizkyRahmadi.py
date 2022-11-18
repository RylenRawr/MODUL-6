r, y = map(int, input().split())
if (r != y):
    print('Jumlah tidak sama')
else:
    barisr = list(map(int, input().split()))
    barisy = list(map(int, input().split()))
    for i in range (r):
        print(barisr[i] * barisy[i], end=' ')