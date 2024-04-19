sex = str(input("Digite o seu sexo (M ou F): "))

while sex not in "MmFf" :
    sex = str(input("Dados invalidos. Por favor digite novamente: "))

print("sexo {} registrado com sucesso".format(sex))