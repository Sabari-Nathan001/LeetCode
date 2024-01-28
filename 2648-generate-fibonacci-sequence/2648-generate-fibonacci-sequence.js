/**
 * @return {Generator<number>}
 */
var fibGenerator=function*(){
    function fibo(n){
        const fib=[0,1];
        for(let i=2;i<=n;i++){
            fib[i]= fib[i-1]+fib[i-2];
        }
        return fib[n];
    }
    let count=0;
    while(true){
        yield fibo(count);
        count++;
    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */