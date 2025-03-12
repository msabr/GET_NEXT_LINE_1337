# **get_next_line - 42 Network**  

## **Overview**  
Get Next Line delivers a function, `get_next_line()`, that retrieves a line from a file descriptor. It’s divided into two parts:
- **Mandatory Part**: A single function to read lines sequentially from a file descriptor or standard input.
- **Bonus Part**: Enhanced version supporting multiple file descriptors simultaneously with a single static variable.

### Key Features

- Returns a line ending with `\n` (unless EOF is reached without it).
- Handles both file input and standard input efficiently.
- Uses static variables for state persistence across calls.
- Bonus: manages multiple file descriptors without mixing their reading threads.

### Restrictions

- Written in C, adhering to the 42 Norm.
- No unexpected crashes (e.g., segmentation faults).
- No memory leaks from heap allocations.
- Compiled with `-Wall -Wextra -Werror` and `-D BUFFER_SIZE=n` (e.g., 42).
- No use of `libft`, `lseek()`, or global variables.

## Getting Started

### Prerequisites

- C compiler (e.g., `clang` or `gcc`).
- `make` utility.

### How to Build and Run

1. Clone the repository:

   ```bash
   git clone https://github.com/LuizGandra/get-next-line-42.git
   cd get-next-line-42

2. Build the mandatory part:

   ```bash
   clang -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c -o gnl

3. Build the bonus part (optional, separately):

   ```bash
   clang -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line_bonus.c get_next_line_utils_bonus.c -o gnl_bonus

4. Run with a file or standard input:

   ```bash
   ./gnl <file>

## Project Structure

- `get_next_line.h`: function prototype for mandatory part.
- `get_next_line.c`: main function source.
- `get_next_line_utils.c`: helper functions.
- `get_next_line_bonus.h`: bonus function prototype.
- `get_next_line_bonus.c`: bonus main source.
- `get_next_line_utils_bonus.c`: bonus helper functions.
