const readline = require("readline");

const r1 = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

r1.once("line", (line) => {
  const [_, P] = line.split(/ /).map(Number);
  console.log(P);
});
