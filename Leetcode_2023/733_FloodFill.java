import java.util.*;
class Solution {
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        boolean[][] visit = new boolean[(image.length)][(image[0].length)];
        int startColor = image[sr][sc];
        DFS(visit, image, startColor, color, sr, sc);
        return image;
    }
    private void DFS (boolean[][] visit, int[][]image, int colour, int color, int r, int c){
        if (r < 0 || r == image.length) return;
        if (c < 0 || c == image[0].length) return; 
        if (visit[r][c] == true || image [r][c] != colour) return;
        visit[r][c] = true;
        image[r][c] = color;
        DFS(visit, image, colour, color, r-1, c);
        DFS(visit, image, colour, color, r+1, c);
        DFS(visit, image, colour, color, r, c-1);
        DFS(visit, image, colour, color, r, c+1);

    }
}