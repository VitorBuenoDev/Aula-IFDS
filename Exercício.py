n1 = float(input("Informe a primeira nota "))
n2 = float(input("Informe a segunda nota "))
media = (n1+n2)/2
media = round(media, 1)
if media >= 6.0:
    print("Parabéns, você foi aprovado com média", media)
else:
    print("Você foi reprovado com média", media)