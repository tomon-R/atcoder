# ===== Settings =====
CXX := g++
CXXFLAGS := -std=gnu++20 -O2 -g -Wall -Wextra -DLOCAL -I~/atcoder/ac-library
LDFLAGS :=
BUILD_DIR := build


.PHONY: run clean

# ===== Run =====
run:
	@DIR=$$(pwd); \
	SRC="$$DIR/main.cpp"; \
	IN="$$DIR/in.txt"; \
	OUT="$$DIR/out.txt"; \
	EXE="$(BUILD_DIR)/main"; \
	test -f $$SRC || { echo "Error: $$SRC not found"; exit 1; }; \
	mkdir -p $(BUILD_DIR); \
	echo "== Compile $$SRC -> $$EXE =="; \
	$(CXX) $(CXXFLAGS) $$SRC -o $$EXE $(LDFLAGS); \
	echo "== Run $$EXE with $$IN =="; \
	$$EXE < $$IN | tee $$OUT

# ===== Clean =====
clean:
	@echo "== Clean $(BUILD_DIR) =="
	rm -rf $(BUILD_DIR)