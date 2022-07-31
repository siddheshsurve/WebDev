let count =0;
let countEle = document.getElementById("count")
let saved = document.getElementById("save-ele");
console.log(saved);

function counter(){
    count+=1;
    countEle.innerHTML = count;
}


function save(){
    let countStr = count + " - "
    saved.textContent += countStr 
    countEle.textContent = 0
    count = 0
}