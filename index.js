const API_KEY = `7dc05f50b1c3eb62cd68da6499d37fc3`
const form = document.querySelector("form")
const search = document.querySelector("#search")
const weather = document.querySelector("#weather")
// const API = `https://api.openweathermap.org/data/2.5/weather?
//     // q=${city}&appid=${API_KEY}&units=metric`
// const IMG_URL = `https: //openweathermap.org/img/wn/${data.weather[0].icon}@2x.png`
const getWeather = async (city)=>{
    weather.innerHTML = "LOADING..."
    const url = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${API_KEY}&units=metric`
    const response = await fetch(url);
    const data = await response.json()
    showeather(data);
}
const showeather = (data)=>{{
    if(data.cod == "404"){
        weather.innerHTML = "city not found"
    }
weather.innerHTML = `
<div>
        <img src="https://openweathermap.org/img/wn/${data.weather[0].icon}@2x.png">
</div>
</div>
    <div>
        <h2>${data.main.temp}c</h2>
        <h4>${data.weather[0].main}</h4>
      </div>
    </div>
`
}}
form.addEventListener('submit',(e)=>{{
    getWeather(search.value);
    e.preventDefault();
}})