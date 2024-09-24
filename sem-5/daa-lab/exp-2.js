function power(x, n) {
  if (n < 0) {
      x = 1 / x;
      n = -n;
  }

  function powerHelp(x, n) {
    if (n === 0) return 1;
    const half = powerHelp(x, Math.floor(n / 2));
    if (n % 2 === 0) {
        return half * half;
    } else {
        return half * half * x;
    }
  }
  return powerHelp(x, n);
}

console.log(power(2, 10));
// console.log(power(2, -2));
// console.log(power(5, 3));
