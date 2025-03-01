char* triangleType(int* nums, int n) {
    int a=nums[0];
    int b=nums[1];
    int c=nums[2];
    if(a==b && b==c && c==a){
        return "equilateral";
    }else if((a==b && a+b>c)||(b==c&&b+c>a)||(a==c&&a+c>b)){
        return "isosceles";
    }else if(a+b>c && b+c>a && c+a>b){
        return "scalene";
    }else{
        return "none";
    }
}
