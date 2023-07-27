/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
var promiseAll = async function(functions) {
    try{
         let res= await Promise.all(functions.map(fn=>fn()));
         return res;
    }catch(err){
        throw err
    }
     
 };
 
 /**
  * const promise = promiseAll([() => new Promise(res => res(42))])
  * promise.then(console.log); // [42]
  */