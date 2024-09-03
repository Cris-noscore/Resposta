
# Resposta 3

# Análise de Faturamento

Este é um script Python que calcula o menor e o maior valor de faturamento e o número de dias com faturamento acima da média a partir de dados de faturamento armazenados em um arquivo JSON.

## Descrição

O script lê um arquivo JSON contendo dados de faturamento e calcula as seguintes informações:
- Menor valor de faturamento.
- Maior valor de faturamento.
- Número de dias com faturamento acima da média mensal.

## Código

```python
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

Arquivo JSON
O script espera um arquivo JSON no formato:

{
    "faturamento": [
      {"dia": 1, "valor": 150.0},
      {"dia": 2, "valor": 200.0},
      {"dia": 3, "valor": 250.0},
      {"dia": 4, "valor": 0.0},
      {"dia": 5, "valor": 300.0},
      {"dia": 6, "valor": 0.0},
      {"dia": 7, "valor": 100.0}
    ]
}

## Autores

- [@Cris-noscore](https://www.github.com/Cris-noscore)


## Stack utilizada

**Back-end:** Python
