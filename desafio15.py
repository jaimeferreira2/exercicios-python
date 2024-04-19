km= float(input("Digite a quantidade de Km percorridos pelo carro que voce alugou: "))
dia= int(input("Digite por quantos dias voce alugou esse carro: "))

v1= 60 * dia 
v2= 0.15 * km

vf= v1 + v2

float(input("Voce alugou esse carro por {} dias e rodou {}km com ele por tanto o valor a que voce deve pagar é {:.2f}R$ ".format(dia,km,vf)))