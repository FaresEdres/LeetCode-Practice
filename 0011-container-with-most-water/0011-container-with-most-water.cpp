class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0,max_area=0;
int left=0;
int right=height.size()-1;
while(left<right){
area=(right-left)*min(height[right],height[left]);
max_area=max(area,max_area); 
height[left]<height[right] ? left++:right--;


}
return max_area;
    }
};

        /*
        int steps=0,h=0,area=0,maxArea=0;
        for(int i=0;i<height.size();i++){
           
            for(int j=i+1;j<height.size();j++){
                steps++;
               h=min(height[i],height[j]);
                area=h*steps;
                maxArea=max(area,maxArea);
              
            
        }
        
       steps=0;
        }
        return maxArea;
        */