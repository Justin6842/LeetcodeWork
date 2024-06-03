import java.util.*;
class Solution {
    public boolean canVisitAllRooms(List<List<Integer>> rooms) {
        boolean[] visited = new boolean[1000];
        int total = rooms.size();
        visit(rooms, visited, 0);
        for (int i = 0; i < total; i++){
            if (visited[i] == false) return false;
        }
        return true;
    }
    private void visit(List<List<Integer>> rooms, boolean[] visited, int x){
        visited[x] = true;
        for (int j = 0; j < rooms.get(x).size(); j++){
            if (visited[rooms.get(x).get(j)] == false) visit(rooms, visited, rooms.get(x).get(j));
        }
    }
}