import sys

n = int(sys.stdin.readline())
d = int(sys.stdin.readline())

if n == 2:
    if d == 18:
        sys.stdout.write("Special")
    elif d>18:
        sys.stdout.write("After")
    else:
        sys.stdout.write("Before")

elif n > 2:
    sys.stdout.write("After")
    
elif n < 2:
    sys.stdout.write("Before")