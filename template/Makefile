# ===== Settings =====
CXX := g++
CXXFLAGS := -std=gnu++20 -O2 -Wall -Wextra -DLOCAL -I~/atcoder/ac-library
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
	$(CXX) $(CXXFLAGS) $$SRC -o $$EXE $(LDFLAGS); \
	$$EXE < $$IN | tee $$OUT

# ===== Clean =====
clean:
	@rm -rf $(BUILD_DIR)