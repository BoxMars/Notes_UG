//Status constants
var SESSION_STATUS = Flashphoner.constants.SESSION_STATUS;
var STREAM_STATUS = Flashphoner.constants.STREAM_STATUS;
var session;
var PRELOADER_URL = "https://github.com/flashphoner/flashphoner_client/raw/wcs_api-2.0/examples/demo/dependencies/media/preloader.mp4";
  
//Init Flashphoner API on page load
function init_api() {
    Flashphoner.init({});   
    //Connect to WCS server over websockets
    session = Flashphoner.createSession({
        urlServer: "rtmp://159.223.46.242:1935/mystream1" //specify the address of your WCS
    }).on(SESSION_STATUS.ESTABLISHED, function(session) {
        console.log("ESTABLISHED");
    });
  
    playBtn.onclick = playClick;
}
  
//Detect browser
var Browser = {
    isSafari: function() {
        return /^((?!chrome|android).)*safari/i.test(navigator.userAgent);
    },
}
 
function playClick() {
    if (Browser.isSafari()) {
        Flashphoner.playFirstVideo(document.getElementById("play"), true, PRELOADER_URL).then(function() {
            playStream();
        });
    } else {
        playStream();
    }
}
  
//Playing stream
function playStream() {
    session.createStream({
        name: "live_stream",
        display: document.getElementById("myVideo"),
    }).play();
}