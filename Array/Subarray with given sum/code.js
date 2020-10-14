// const arr = [1,2,3,7,5], sum = 12;
// const arr = [1,2,3,4,5,6,7,8,9,10], sum = 15;
const arr = [15,2,4,8,9,5,10,23], sum = 23;

function sumarray(arr,sum) {
    let start=0;
    let n = arr.length;
    let curSum = arr[0];

    for(let i=1;i<n;i++) {
        while(curSum > sum && start < i-1) {
            curSum -= arr[start];
            start++;
        }

        if(curSum == sum) {
            console.log("Find at:",start,i-1);
            return;
        }
        if(curSum < sum) {
            curSum += arr[i];
        }
    }
    console.log("Cannot Find");
}

sumarray(arr,sum)