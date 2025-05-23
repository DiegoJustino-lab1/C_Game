# C_Game

🎮 Um jogo de perguntas e respostas sobre conhecimentos gerais, desenvolvido em linguagem C, utilizando DLLs para modularização do código.

## 🧠 Objetivo

- Testar conhecimentos gerais através de perguntas de múltipla escolha.
- Demonstrar o uso de DLLs em projetos em C para modularização e reutilização de código.

## 📂 Estrutura do Projeto

- `main.c`: Arquivo principal que inicia o jogo e gerencia o fluxo principal.
- `controles.c`: Contém funções relacionadas ao controle do jogo, como navegação entre perguntas e verificação de respostas.
- `perguntas.c`: Armazena as perguntas e respostas do jogo.
- `utils.c`: Funções utilitárias utilizadas em diversas partes do projeto.

## 🚀 Como Executar

1. Certifique-se de ter um compilador C instalado (como `gcc`).
2. Compile os arquivos:

   ```bash
   gcc main.c controles.c perguntas.c utils.c -o c_game
Execute o programa:

bash
Copiar
Editar
./c_game
🔧 Tecnologias Utilizadas
Linguagem C

DLLs para modularização

Compilador GCC

📄 Licença
Este projeto está licenciado sob a MIT License.
