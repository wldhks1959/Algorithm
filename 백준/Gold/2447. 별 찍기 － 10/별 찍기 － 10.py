def star(a):
    if a == 1:
        return ['*']

    Stars = star(a // 3)
    list = []

    for S in Stars:
        list.append(S * 3)
    for S in Stars:
        list.append(S + ' ' * (a // 3) + S)
    for S in Stars:
        list.append(S * 3)
    return list


n = int(input())
print('\n'.join(star(n)))