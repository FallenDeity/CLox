import os
import pathlib

MAIN_DIR = pathlib.Path("src")
CLANG_COMMAND = "clang-format -i {file}"
EXTENSIONS = [".cpp", ".hpp", ".c", ".h"]

for file in MAIN_DIR.rglob("*"):
    if file.suffix in EXTENSIONS:
        command = CLANG_COMMAND.format(file=file)
        print(command)
        os.system(command)
