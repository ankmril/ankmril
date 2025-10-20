public class basicpattern {
    public void main(String args[]) {
        int x,y;
        
        for(x=1;x<=5;x++) {
            for(y=1;y<=x;y++) {
                System.out.print(y);
            }
            System.out.println();
        }
    }
}