
import java.io.*;

public class bw_op
{
    long rb, rw;

    void calc(long x1, long y1, long x2, long y2)
    {
        if (y1 != y2)
            return;

        long y = y1;
        long s = y * (x2 - x1);

        long b = s / 2;
        long w = s / 2;

        if (Math.min(x1, x2) % 2 == 0)
            b = s - w;
        else
            w = s - b;
        
        if (y < 0)
        {
            b = b ^ w;
            w = b ^ w;
            b = b ^ w;
        }
        
        rb += b;
        rw += w;
    }

    void solve() throws IOException
    {
        BufferedReader in = new BufferedReader(new FileReader("bw.in"));

        rb = 0;
        rw = 0;
        int n = Integer.parseInt(in.readLine());

        long[] ini, prv, cur;

        ini = parseCoords(in.readLine());
        prv = (long[]) ini.clone();
        for (int i = 1; i <= n; i++)
        {
            if (i == n)
                cur = ini;
            else
                cur = parseCoords(in.readLine());
            calc(prv[0], prv[1], cur[0], cur[1]);
            prv = cur;
        }

        in.close();

        PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter("bw.out")));
        out.println(Math.abs(rb) + " " + Math.abs(rw));
        out.close();
    }

    public static void main(String[] args) throws IOException
    {
        bw_op b = new bw_op();
        b.solve();
    }

    static long[] parseCoords(String s)
    {
        String[] z = s.split(" ");

        long[] r = new long[z.length];
        for (int i = 0; i < z.length; i++)
            r[i] = Long.parseLong(z[i]);
        return r;
    }
}