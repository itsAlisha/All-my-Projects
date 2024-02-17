    var tablinks=document.getElementsByClassName("tab-links");
    var tabcontents=document.getElementsByClassName("tab-contents");
    function opentab(tabname)
    {
        for(var tablink of tablinks){
            tablink.classList.remove("active-link");
        }
        for(var tabcontent of tabcontents){
            tabcontent.classList.remove("active-tab");
        }
        event.currentTarget.classList.add("active-link");
        document.getElementById(tabname).classList.add("active-tab");
    }
    var sidemenu=document.getElementById("sidemenu");
    function openmenu(){
        sidemenu.style.right="0";
    }
    function closemenu(){
        sidemenu.style.right="-200px";
    }
    const scriptURL = 'https://script.google.com/macros/s/AKfycbxnBn7XoSQn7z1Hc_YOs9J-AvnqCcP4X-rImpEbbIsXIVjNMC4zxDWRHmp7IdF6It8r/exec'
    const form = document.forms['submit-to-google-sheet']
    const msg=document.getElementById("msg");
    form.addEventListener('submit', e => {
      e.preventDefault()
      fetch(scriptURL, { method: 'POST', body: new FormData(form)})
        .then(response =>{
            msg.innerHTML="Message sent successfully"
            setTimeout(function(){
                msg.innerHTML=""
            },1000)
            form.reset()
        })
        .catch(error => console.error('Error!', error.message))
    })
    function toggleContent(contentId, btnId) {
        var content = document.getElementById(contentId);
        var btn = document.getElementById(btnId);
        if (content.style.display === "none" || content.style.display === "") {
            content.style.display = "inline";
            btn.textContent = "Show Less";
        } else {
            content.style.display = "none";
            btn.textContent = "Show More";
        }
    }