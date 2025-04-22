# 🖨️ ft_printf
A minimalist recreation of printf() in C

---
## 📜 About
ft_printf is a 42 School project that recodes the standard printf() function from libc, handling conversions like %c, %s, %p, %d, %i, %u, %x, %X, and %%.

- ✅ No buffer management (simpler than original printf)
- ✅ Variadic arguments (va_list magic)
- ✅ Fully tested against the real printf
---
## 🛠 Features

| Conversion | Description                          | Example                                  | Output               |
|------------|--------------------------------------|------------------------------------------|----------------------|
| `%c`       | Single character                     | `ft_printf("%c", 'A')`                   | `A`                  |
| `%s`       | Null-terminated string               | `ft_printf("%s", "hello")`               | `hello`              |
| `%p`       | Pointer address (hex)                | `ft_printf("%p", ptr)`                   | `0x7ffeee2b4d38`     |
| `%d` / `%i`| Signed integer (base 10)             | `ft_printf("%d", -42)`                   | `-42`                |
| `%u`       | Unsigned integer (base 10)           | `ft_printf("%u", 255)`                   | `255`                |
| `%x`       | Lowercase hexadecimal (base 16)      | `ft_printf("%x", 255)`                   | `ff`                 |
| `%X`       | Uppercase hexadecimal (base 16)      | `ft_printf("%X", 255)`                   | `FF`                 |
| `%%`       | Percent sign                         | `ft_printf("%%")`                        | `%`                  |
---
