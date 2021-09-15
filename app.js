var express=require("express");
var app=express();
app.get("/",function(req,res){
    res.send("<h1>Hello</h1>")
})
app.listen('8080',function(error){
    if(error) throw error
    console.log("Running");
})