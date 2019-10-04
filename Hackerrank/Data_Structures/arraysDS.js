// https://www.hackerrank.com/challenges/arrays-ds/problem

function reverseArray(a) {
    if (a.length <= 1) {
        return a;
    } else {
        const length = a.length;
        let newArr = [];
        for (let i = 0; i < length; i++) {
            let curEl = a.pop();
            newArr.push(curEl);
        };
        return newArr;
    }
    
}