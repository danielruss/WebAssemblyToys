console.log("in log.js")
function log(x) {
    x = x + "";
    let cout = document.getElementById("cout")
    cout.insertAdjacentElement("beforeend", document.createElement("br"));
    cout.insertAdjacentText("beforeend", x);
}
function clear() {
    let cout = document.getElementById("cout")
    cout.innerText = "";
}

window.addEventListener("load", (event) => {

    let coutDiv = document.createElement("div");
    let clearButton = document.createElement("button")
    clearButton.innerText = "clear log"
    clearButton.addEventListener("click", clear)
    coutDiv.id = "cout"
    console.log("Adding div cout...", coutDiv)
    document.body.insertAdjacentElement("beforeend", coutDiv)
    document.body.insertAdjacentElement("beforeend", clearButton)
})