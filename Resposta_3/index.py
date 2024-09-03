import json

def calcular_faturamento(dados):
    valores = [item['valor'] for item in dados if item['valor'] > 0]
    
    if not valores:
        raise ValueError("Não há dados de faturamento para calcular.")

    menor_valor = min(valores)
    maior_valor = max(valores)
    media_mensal = sum(valores) / len(valores)

    dias_acima_da_media = sum(1 for valor in valores if valor > media_mensal)

    return menor_valor, maior_valor, dias_acima_da_media

def main():
    with open('faturamento.json', 'r') as file:
        dados = json.load(file)['faturamento']

    menor_valor, maior_valor, dias_acima_da_media = calcular_faturamento(dados)

    print(f"Menor valor de faturamento: {menor_valor}")
    print(f"Maior valor de faturamento: {maior_valor}")
    print(f"Número de dias com faturamento acima da média: {dias_acima_da_media}")

if __name__ == "__main__":
    main()
