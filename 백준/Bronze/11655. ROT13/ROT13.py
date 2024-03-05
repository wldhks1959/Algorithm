s=input()
ans=''
for x in s:
    if 'a'<=x and x<='z':
        x=ord(x)+13
        if x>122:
            x-=26
        ans+=chr(x)
    elif 'A'<=x and x<='Z':
        x=ord(x)+13
        if x>90:
            x-=26
        ans+=chr(x)
    else:
        ans+=x

print(ans)