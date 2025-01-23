import * as readline from "node:readline/promises";
import { stdin as input, stdout as output } from "node:process";

const rline = readline.createInterface({ input, output });

rline.once("line", (line) => {
  const [a, b] = line.split(/ /).map(Number);
  console.log(a + b);
});

// rline.close();
