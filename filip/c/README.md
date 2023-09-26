I did this problem in more generality than necessary;
because the digits are limited to exactly 3, you can
invert the digits by

$$
A / 100 + 10 \cdot ((A / 10) \mod 10) + 100 \cdot (A \mod 10)
$$

So if $A = 123$, then
$$
123 / 100 = 1 \\
10 \cdot 123 / 10 \mod 10 = 10 \cdot 12 \mod 10 = 20 \\
100 \cdot 123 \mod 10 = 300\\
1 + 20 + 300 = 321
$$
Instead, I based everything on the number of digits, extracted
each digit and adjusted the weight with the appropriate power 
of 10. So I could calculate the number of digits and `filip` will
work, up to a limit, for any number of digits.

The number of digits is determined by $\lfloor \log_{10} n + 1\rfloor.$

Another issue was forgetting that you can't pass a local variable
back from a function; you either must allocate heap or pass a container
as a parameter.

[Stack Overflow example](https://stackoverflow.com/questions/6441218/can-a-local-variables-memory-be-accessed-outside-its-scope?rq=1)

A latex discussion; github flavored latex is pretty limited, so I was researching
some alternate methods -- maybe latex to gfm via pandoc?

[Why is \[ ... \] preferable to $$ ... $$](https://tex.stackexchange.com/questions/503/why-is-preferable-to)

VimTex GIF examples (and how it's done)

[How to make typing GIFs](https://github.com/lervag/vimtex/blob/master/VISUALS.md#how-these-gifs-were-made)

[Math on GitHub: The Good, the Bad and the Ugly](https://nschloe.github.io/2022/05/20/math-on-github.html)

[Supported TeX/LaTeX commands (MathJax)](https://docs.mathjax.org/en/latest/input/tex/macros/index.html)
