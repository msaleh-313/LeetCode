/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn,...args) {

    const newArray=[]
    for(let i=0;i<arr.length;++i)
    {
        newArray.push(fn(arr[i],i,...args))
    }
    return newArray;
}



