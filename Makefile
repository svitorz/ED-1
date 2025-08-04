# Caminho do arquivo fonte (ex: Relacionais/main.cpp ou trabalho_2/ex_1.cpp)
SRC ?=

# Nome do arquivo sem caminho e sem extensão
TARGET := $(basename $(notdir $(SRC)))

# Pasta onde ficará o executável
BUILD_DIR := ./build

# Compilador e flags
CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17

# Caminho completo do executável
OUT := $(BUILD_DIR)/$(TARGET)

# Regra padrão: compilar e rodar
all: run

# Compilar
$(OUT): $(SRC)
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

# Rodar o executável
run: $(OUT)
	@echo "Executando $(TARGET):"
	@./$(OUT)

# Limpar executáveis
clean:
	rm -rf $(BUILD_DIR)
