var createCounter = function(init) {
    let temp = init;
    function increment(){
        init++;
        return init;
    }
    function decrement(){
        init--;
        return init;
    }
    function reset(){
        init = temp;
        return init; 
    }
    return {increment, decrement, reset};
};