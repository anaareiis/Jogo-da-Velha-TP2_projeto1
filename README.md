# Jogo-da-Velha - TP2 Projeto 1

Projeto de jogo da velha (Tic-Tac-Toe) em C++ com testes automatizados usando o framework Catch2.

## Descrição

Este projeto implementa a lógica do jogo da velha com validação de estados de tabuleiro e testes abrangentes.

## Estrutura do Projeto

```
.
├── src/                           # Código fonte principal
│   ├── jogo_da_velha.cpp
│   └── jogo_da_velha.hpp
├── tests/                         # Testes unitários
│   ├── testa_jogo.cpp
│   ├── catch_amalgamated.cpp
│   └── catch_amalgamated.hpp
├── docs/                          # Documentação e relatórios
│   ├── relatorio.pdf
│   └── valgrind.rpt              # Relatório de memory leak
├── Makefile
├── cpplint.py
└── README.md
```

## Compilação

```bash
make
```

## Testes

```bash
make test
```

## Validação de Memória

```bash
make valgrind
```

## Limpeza

```bash
make clean
```

## Autor

Ana Reis

## Licença

Ver arquivo `LICENSE` para detalhes.
