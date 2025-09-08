# Caminho(s) do(s) arquivo(s) fonte principal(is).
# Ex.: make SRC="Aula-6/ex1/main.cpp"
# Ou:  make SRC="projeto/main.cpp lib/outro.cpp"
SRC ?=

# Se =1 (padrão), compila também TODOS os .cpp que estiverem nas mesmas pastas de SRC.
# Se =0, compila SOMENTE os arquivos listados em SRC (e EXTRA_SRCS, se usar).
COMPILE_DIR ?= 1

# Você pode acrescentar fontes extras fora das pastas de SRC:
# Ex.: make SRC="app/main.cpp" EXTRA_SRCS="lib/a.cpp lib/b.cpp" COMPILE_DIR=0
EXTRA_SRCS ?=

# Compilador e flags
CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17

# Pasta de build
BUILD_DIR := ./build
OBJ_DIR := $(BUILD_DIR)/obj

# Alvo (nome do executável) baseado no primeiro arquivo de SRC
MAIN := $(word 1,$(SRC))
TARGET := $(basename $(notdir $(MAIN)))
OUT := $(BUILD_DIR)/$(TARGET)

# Diretórios base das fontes indicadas em SRC
DIRS := $(sort $(foreach s,$(SRC),$(dir $(s))))

# Detecta .cpp nas mesmas pastas dos SRC quando COMPILE_DIR=1
DIR_SRCS := $(sort $(foreach d,$(DIRS),$(wildcard $(d)*.cpp)))

# Lista final de fontes
ifeq ($(COMPILE_DIR),1)
  SRCS := $(sort $(SRC) $(EXTRA_SRCS) $(DIR_SRCS))
else
  SRCS := $(sort $(SRC) $(EXTRA_SRCS))
endif

# Objetos (espelha a estrutura de pastas dentro de build/obj)
OBJS := $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRCS))

# Includes automáticos das pastas dos fontes
INC_DIRS := $(sort $(foreach s,$(SRCS),$(dir $(s))))
INCLUDES := $(addprefix -I,$(INC_DIRS))

# Regra padrão: compilar e rodar
all: run

# Linkagem
$(OUT): $(OBJS)
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

# Compilação de cada .cpp -> .o (criando subpastas em obj/)
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Rodar
run: $(OUT)
	@echo "Executando $(TARGET):"
	@./$(OUT)

# Limpar
clean:
	rm -rf $(BUILD_DIR)

# Ajuda
help:
	@echo "Uso:"
	@echo "  make SRC=\"Aula-6/ex1/main.cpp\"            (compila main + todos .cpp da pasta)"
	@echo "  make SRC=\"Aula-6/ex1/main.cpp\" COMPILE_DIR=0 (somente o(s) arquivo(s) em SRC)"
	@echo "  make SRC=\"app/main.cpp\" EXTRA_SRCS=\"lib/a.cpp lib/b.cpp\" COMPILE_DIR=0"
