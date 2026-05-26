# datewithC 🖤

> A systems programmer's journal — learning C from the ground up, one concept at a time.

---

## What is this?

`datewithC` is my personal learning repository as I move from web/app development into **systems programming** with C.

This isn't a tutorial repo. It's a **journal of real learning** — the confusion, the segfaults, the "oh, so *that's* why" moments. Every file here is something I wrote, broke, fixed, and understood.

---

## Why C?

Because everything real runs on it.

The kernel is C. The networking stack is C. The protocols that move packets across the planet were designed and implemented in C. If you want to understand how computers *actually* work — not just how to use the APIs — C is where you go.

---

## Ground Rules (for myself)

- **No copy-pasting** — every line I type, I understand.
- **Always handle errors** — `if (fd < 0)` is not optional in C.
- **Compile with warnings** — `gcc -Wall -Wextra -g` is the minimum.
- **Break things intentionally** — segfault on purpose, then fix it.
- **Write the why** — comments explain intent, not syntax.

---

## Build & Run
 
Each program has its own `Makefile`. To build:
 
```bash
make          # compile
make run      # compile and run
make debug    # compile and open in gdb
make val      # run with valgrind
make asan     # run with AddressSanitizer + UBSan
make clean    # remove binaries
```

---

## Tools I Use
 
| Tool | Purpose |
|------|---------|
| `gcc` | Compiler — with `-Wall -Wextra -Werror -std=c11` always |
| `make` | Build system — targets for run, debug, valgrind, asan |
| `gdb` | Debugger — for segfaults and stepping through code |
| `valgrind` | Memory leak and error detection |
| `strace` | Watch system calls in real time |
| `tcpdump` | Watch network traffic when working on sockets |

---

## Background

I'm Dani — an MSc CS student in Kerala, India. Made a deliberate move away from web/app development toward **systems programming and networking internals**. This repo is the paper trail of that journey.

---

*"C gives you enough rope to hang yourself."*
*Learning anyway.*
