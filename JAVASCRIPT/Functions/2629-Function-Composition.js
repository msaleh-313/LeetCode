/**
 * @param {Function[]} functions
 * @return {Function}
 */

var compose = function(functions) {
     let len=functions.length
    return function(x) {                    
        for(let i=len-1;i>=0;--i)
        {
            if(typeof functions[i]==='function'){
                x=functions[i](x);
            }            
        }
        return x;
    }
}

   


/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */
