const nama = "Rendy Dyaz Permana"
let usia = 25;

let biodata = document.getElementById('biodata');
console.log(biodata);

function generateBiodata() {
     let generasi;

     if (usia > 1 && usia <= 4) {
          generasi = "generasi balita";
     }
     else if (usia > 4 && usia <= 13) {
          generasi = "generasi anak anak";
     }
     else if (usia > 13 && usia <= 17) {
          generasi = "generasi remaja";
     }
     else if (usia > 17 && usia <= 30) {
          generasi = "generasi dewasa";
     }
     else if (usia > 30 && usia <= 50) {
          generasi = "generasi tua";
     }
     else if (usia > 50) {
          generasi = "tua bgt anda"
     } else {
          console.log('yah saya gak tau');
     }

     return biodata.innerHTML = generasi;
}

generateBiodata()

console.log(nama);
console.log(usia);