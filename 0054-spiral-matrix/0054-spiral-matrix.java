class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int rowStart=0;
        int rowEnd=matrix.length-1;
        int colStart=0;
        int colEnd=matrix[0].length-1;
        int arraySize=matrix.length*matrix[0].length;
        List<Integer> orderList=new ArrayList<>();
        while(colStart<=colEnd ||rowStart<=rowEnd){

        for (int i=colStart; i<=colEnd;i++){
            orderList.add(matrix[rowStart][i]);
        }
        
        
       rowStart++;
         for (int i=rowStart; i<=rowEnd;i++){
            orderList.add(matrix[i][colEnd]);
        }
                if(orderList.size() ==arraySize)break;

      colEnd--;
         for (int i=colEnd; i>=colStart;i--){
            orderList.add(matrix[rowEnd][i]);
        }
               

         rowEnd--;

         for (int i=rowEnd; i>=rowStart;i--){
            orderList.add(matrix[i][colStart]);
        }
        colStart++;
       
          if(orderList.size() ==arraySize)break;

        
        }
        
       
        
  return orderList;
    }
  
}