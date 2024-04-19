nome = str(input("Digite seu nome: ")).strip()

print("analisando seu nome em maiusculo é: {}".format(nome.upper()))
print("Analisando seu nome em minuscolo é: {} ".format(nome.lower()))
print("Analisando seu nome ele tem {} caracteres".format(len(nome)-nome.count(" ")))