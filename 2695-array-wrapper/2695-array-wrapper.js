class ArrayWrapper {

    constructor(nums) {
        this.nums = nums;
    }

    valueOf() {
        return this.nums.reduce((sum, x) => sum + x, 0);
    }

    toString() {
        return "[" + this.nums.join(",") + "]";
    }
}