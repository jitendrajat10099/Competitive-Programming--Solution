// https://www.hackerrank.com/challenges/permutation-equation/problem
function permutationEquation(p) {
    let result = [];
    for (let x = 1; x <= p.length; x++) {
        let index1 = p.findIndex(n => n === x) + 1;
        let index2 = p.findIndex(n => n === index1) + 1;
        result.push(index2);
    }
    return result;
}