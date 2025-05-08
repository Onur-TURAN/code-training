# Introduction

This Folder contains Python scripts designed to solve challenges on CryptoHack in Introduction Room. Each script demonstrates various cryptographic techniques and mathematical operations. Below is an example script that decodes a flag using XOR operations.


## Template for Python Scripts

Each Python script in this repository should follow the structure below:

1. **Imports**:
   - Use `import sys` for checking Python version compatibility.
   - Include any additional libraries required for cryptographic operations (e.g., `import math`, `import base64`).

3. **Mathematical Operations**:
   - Common operations include XOR, modular arithmetic, and bitwise shifts.
   - Example: `o ^ 0x32` performs an XOR operation with the hexadecimal value `0x32`.

4. **Output**:
   - Print the decoded flag or result of the operation.

## Mathematical Operations Used

- **XOR Operation**:
  - Used for encoding and decoding data.
  - Example: `chr(o ^ 0x32)` decodes a character by applying XOR with `0x32`.


- **Bitwise Operations**:
  - Includes shifts (`<<`, `>>`) and logical operations (`&`, `|`).

## Notes

- Ensure all scripts are compatible with Python 3.
- Use comments to explain the purpose of each operation.
- Test scripts with sample inputs to verify correctness.


---

credit 0nur
version 1.0
