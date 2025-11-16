const wait = ms => new Promise(res => setTimeout(res, ms));

async function demo() {
  console.log("Waiting...");
  await wait(800);
  console.log("Done!");
}

demo();
