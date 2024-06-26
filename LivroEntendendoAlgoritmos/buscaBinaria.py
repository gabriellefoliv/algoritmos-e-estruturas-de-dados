

def pesquisaBinaria(lista, item):
    baixo = 0
    alto = len(lista) - 1
    
    while baixo <= alto:
        meio = (baixo + alto) / 2
        chute = lista[meio]
        if chute == item:
            return meio
        if chute > item:
            alto = meio - 1
        else: 
            baixo = meio + 1
    return None 

print(pesquisaBinaria([1, 3, 5, 7, 9], 3))