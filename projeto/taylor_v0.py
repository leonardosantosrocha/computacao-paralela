# 1. Crie um programa para calcular a fórmula S = (1/1) + (1/2) + (1/3) + ... (1/T).
def taylor(t:int) -> float:
    sum = 0
    for i in range(1, t):
        sum = sum + (1/i)
    return sum
 
print(taylor(10))
