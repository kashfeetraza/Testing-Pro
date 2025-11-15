// Generate a random "spell" and "power level"
function randomSpell() {
  const spells = ["Fireball", "Ice Nova", "Shadow Blink", "Thunder Strike", "Arcane Wave"];
  const spell = spells[Math.floor(Math.random() * spells.length)];
  const power = Math.floor(Math.random() * 100) + 1;

  return `${spell} — Power Level: ${power}`;
}

console.log("Casting spell...");
setTimeout(() => {
  console.log(randomSpell());
}, 1000);
