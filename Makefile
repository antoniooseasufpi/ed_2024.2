# Nome do arquivo de entrada
file ?= questao.c
EXECUTABLE = $(basename $(notdir $(file)))

.PHONY: run clean

# Compila, executa o arquivo e limpa após a execução
run: $(EXECUTABLE)
	@./$(EXECUTABLE)
	@$(MAKE) clean

# Compila o arquivo C
$(EXECUTABLE): $(file)
	@gcc -o $(EXECUTABLE) $(file)

# Limpa o executável gerado
clean:
	@rm -f $(EXECUTABLE)
