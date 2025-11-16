const obj = { a: 10, b: 20, c: 30 };

const logged = new Proxy(obj, {
  get(target, prop) {
    console.log(`Accessed ${String(prop)} → ${target[prop]}`);
    return target[prop];
  }
});

console.log(logged.a);
console.log(logged.c);
