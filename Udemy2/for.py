N=int(input("Digite quantos numeros serão digitados: "))
soma = 0
for i in range(0, N):
    x = int(input("Digite um numero: "))
    soma = soma + x
print("Soma =", soma)