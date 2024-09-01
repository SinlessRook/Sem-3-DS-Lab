# update_readme.py

def extract_code(file_path):
    with open(file_path, 'r') as file:
        return file.read()

def update_readme(code, placeholder="<!-- CODE_PLACEHOLDER -->"):
    with open('README.md', 'r') as readme:
        content = readme.read()

    updated_content = content.replace(placeholder, f"```c\n{code}\n```")

    with open('README.md', 'w') as readme:
        readme.write(updated_content)

if __name__ == "__main__":
    code = extract_code('./Module 1/Code/Hello_World.c')
    update_readme(code)
