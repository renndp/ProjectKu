let body = document.body;
let info = document.getElementById("info");
let mode = document.getElementById("mode");
let home = document.getElementById("hehe");
let janda = document.getElementById("janda");


const darkLimit = 5;
let darkCounter = 0;
let darkRemainingLeft;

function darkMode() {
    if (darkRemainingLeft == 1) {
        info.textContent = "habis bro"
        mode.style.display = "none"
        home.textContent = "reset"
        return;
    }
    
    darkCounter += 1;
    darkRemainingLeft = darkLimit - darkCounter;
    info.textContent = `drakmode di pakai ${darkCounter} tersisa ${darkRemainingLeft}`
    body.classList.toggle("dark")

}

function jandaMode() {
    
    if (darkRemainingLeft == 1) {
        
        info.textContent = "habis bro"
        janda.style.display = "none"
        home.textContent = "reset"
        return;
    }
    
    darkCounter += 1;
    darkRemainingLeft = darkLimit - darkCounter;
    info.textContent = `drakmode di pakai ${darkCounter} tersisa ${darkRemainingLeft}`
    body.classList.toggle("janda")

}
function reset() {
    location.reload();
}