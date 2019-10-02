// https://www.hackerrank.com/challenges/minimum-distances/problem
function minimumDistances(a) {
    let min = Number.MAX_VALUE;
    for (let i = 0; i < a.length; i++) {
        for (let j = i + 1; j < a.length; j++) {
            if (a[i] === a[j]) {
                if (j - i < min) {
                    min = j - i;
                }
                break;
            }
        }
    }
    return min === Number.MAX_VALUE ? -1 : min;
}