// the mjs file didn't work, it was uploaded but the judge couldn't find it.
// You must use -l "JavaScript (Node.js)" when submitting
const readline = require("readline");

const rline = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rline.once("line", (line) => {
  const [a, b] = line.split(/ /).map(Number);
  console.log(a + b);
});
