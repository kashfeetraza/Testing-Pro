function randColor() {
  return "#" + Math.floor(Math.random() * 0xffffff).toString(16).padStart(6, "0");
}

setInterval(() => {
  document.body.style.background = randColor();
}, 500);
