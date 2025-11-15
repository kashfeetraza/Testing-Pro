class Emitter {
  constructor() { this.events = {}; }

  on(event, fn) {
    (this.events[event] ||= []).push(fn);
  }

  emit(event, data) {
    (this.events[event] || []).forEach(fn => fn(data));
  }
}

const bus = new Emitter();
bus.on("ping", msg => console.log("Got:", msg));
bus.emit("ping", "Hello world!");
