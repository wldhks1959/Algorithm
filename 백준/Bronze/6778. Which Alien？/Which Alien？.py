if __name__ == '__main__':
    sign = int(input())
    eyes = int(input())

    # 트로이
    if sign >= 3 and eyes <= 4: print("TroyMartian")
    if sign <= 6 and eyes >= 2: print("VladSaturnian")
    if sign <= 2 and eyes <= 4: print("GraemeMercurian")