# C_Game

Um quiz interativo em C que carrega sua lógica por meio de uma DLL no Windows, demonstrando uma arquitetura de plugins simples e modular.

### 🎯 Objetivo
- Exibir perguntas de múltipla escolha.
- Controlar navegação e seleção de respostas via teclado.
- Isolar a lógica do jogo em uma DLL para facilitar extensões.

### 📂 Estrutura do Projeto
C_Game/
├── game1_dll/
│ ├── game1_dll.h # Definições de export/import e protótipos
│ ├── game1_dll.c # Implementação das funções: description, reset, update, controller
│ └── Makefile (opcional)
├── loader/
│ ├── main.c # Carrega a DLL e faz o loop do jogo
│ └── Makefile (opcional)
└── README.md

markdown
Copiar
Editar

### 🔧 Tecnologias e Bibliotecas
- Linguagem C (C99)
- Windows API (`LoadLibraryA`, `GetProcAddress`)
- DLLs (`__declspec(dllexport/dllimport)`)
- Funções de console (`printf`, `getchar`)

### 🚀 Como Compilar e Executar

1. **Compile a DLL**  
   - Usando **GCC/MinGW**:
     ```bash
     gcc -shared -o game1_dll.dll game1_dll.c -Wl,--out-implib,libgame1_dll.a
     ```
   - Ou no **Visual Studio Developer**:
     ```powershell
     cl /LD game1_dll.c /Fe:game1_dll.dll
     ```

2. **Compile o Loader**  
   - Com **GCC/MinGW**:
     ```bash
     gcc main.c -o C_Game.exe
     ```
   - No **Visual Studio**:
     ```powershell
     cl main.c /Fe:C_Game.exe
     ```

3. **Execute**  
   - Certifique-se de que `game1_dll.dll` está no mesmo diretório de `C_Game.exe`.
   - No prompt de comando:
     ```bash
     C_Game.exe game1_dll.dll
     ```

#### Controles do Jogo
- **W/S/A/D**: navegação entre opções
- **N/M**: seleção de opção A ou B
- **R**: reiniciar o jogo

### 📄 Licença
Este projeto está licenciado sob a [MIT License](LICENSE).
