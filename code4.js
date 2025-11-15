function dropEmoji() {
  const e = document.createElement("div");
  e.textContent = "🌟";
  e.style.position = "absolute";
  e.style.left = Math.random() * window.innerWidth + "px";
  e.style.top = "-20px";
  e.style.fontSize = "2rem";
  document.body.appendChild(e);

  let y = -20;
  const fall = setInterval(() => {
    y += 5;
    e.style.top = y + "px";
    if (y > window.innerHeight) {
      clearInterval(fall);
      e.remove();
    }
  }, 30);
}

setInterval(dropEmoji, 200);
