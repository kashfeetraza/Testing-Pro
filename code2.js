const btn = document.createElement("button");
btn.textContent = "Catch me!";
btn.style.position = "absolute";
btn.style.top = "100px";
btn.style.left = "100px";
document.body.appendChild(btn);

btn.addEventListener("mouseover", () => {
  btn.style.top = Math.random() * window.innerHeight + "px";
  btn.style.left = Math.random() * window.innerWidth + "px";
});
