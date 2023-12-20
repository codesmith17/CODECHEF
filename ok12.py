

class Point:
    def __init__(self):
        self.x = 0
        self.y = 0
        self.d1 = 0
        self.d2 = 0
        self.ords = [-1] * 4


points = [Point() for i in range(100000)]


def comp1(i, j):
    if points[i].d1 != points[j].d1:
        return points[i].d1 < points[j].d1
    return points[i].d2 < points[j].d2


def comp(i, j):
    if points[i].d2 != points[j].d2:
        return points[i].d2 < points[j].d2
    return points[i].d1 < points[j].d1


ordering = [''] * (100000 + 1)

n, m = map(int, input().split())
ordering = input().strip()

for i in range(n):
    points[i].x, points[i].y = map(int, input().split())
    points[i].d1 = points[i].x + points[i].y
    points[i].d2 = points[i].x - points[i].y

    for j in range(4):
        points[i].ords[j] = -1

sor = list(range(n))
sor.sort(key=lambda i: (points[i].d1, points[i].d2))

for i in range(1, n):
    if points[sor[i-1]].d1 == points[sor[i]].d1:
        points[sor[i-1]].ords[1] = sor[i]
        points[sor[i]].ords[2] = sor[i-1]

sor.sort(key=lambda i: (points[i].d2, points[i].d1))

for i in range(1, n):
    if points[sor[i-1]].d2 == points[sor[i]].d2:
        points[sor[i-1]].ords[0] = sor[i]
        points[sor[i]].ords[3] = sor[i-1]

b = 0
for c in ordering:
    curr = points[b].ords[ord(c) - ord('A')]
    if points[b].ords[ord(c) - ord('A')] == -1:
        continue
    for j in range(4):
        if points[b].ords[j] != -1:
            points[points[b].ords[j]].ords[3-j] = points[b].ords[3-j]
    b = curr

print(points[b].x, points[b].y)
