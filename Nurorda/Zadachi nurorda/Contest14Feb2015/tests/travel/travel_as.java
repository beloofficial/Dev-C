import java.io.*;
import java.util.*;

@SuppressWarnings("unchecked")
public class travel_as implements Runnable {
    BufferedReader in;
    StringTokenizer st;

    public int nextInt() throws IOException {
        while (st == null || !st.hasMoreTokens()) {
            st = new StringTokenizer(in.readLine());
        }
        return Integer.parseInt(st.nextToken());
    }

    class Edge {
        int s;
        int t;
        Edge r;
        int color;

        Edge(int s, int t) {
            this.s = s;
            this.t = t;
        }
    }

    ArrayList<Edge>[] edges;

    int n;
    boolean[] u;
    boolean[] v;
    int[] enter;
    int[] rett;
    int time;

    boolean[] ap;

    void dfs(int i, boolean root) {
        u[i] = true;
        enter[i] = time++;
        rett[i] = enter[i];
        int cnt = 0;
        for (Edge e : edges[i]) {
            if (!u[e.t]) {
                cnt++;
                dfs(e.t, false);
                if (rett[e.t] < rett[i]) {
                    rett[i] = rett[e.t];
                }
                if (!root && rett[e.t] >= enter[i]) {
                    ap[i] = true;
                }
            } else {
                if (enter[e.t] < rett[i]) {
                    rett[i] = enter[e.t];
                }
            }
        }
        if (root && cnt > 1) {
            ap[i] = true;
        }
    }

    int cnum;

    void color(int i, Edge p) {
        u[i] = true;
        for (Edge e : edges[i]) {
            if (!u[e.t]) {
                if (rett[e.t] >= enter[i] || p == null) {
                    cnum++;
                    e.color = e.r.color = cnum;
                } else {
                    e.color = e.r.color = p.color;
                }
                color(e.t, e);
            } else {
                if (!v[e.t]) {
                    e.color = e.r.color = p.color;
                }
            }
        }
        v[i] = true;
    }

    Set<Integer>[] inap;
    Set<Integer>[] inbc;

    int[] rapind;
    long[] answer;

    int[] size;

    long countap(int i) {
        u[i] = true;

        int chn;
        long sum = 0;
        long sumsq = 0;
        for (int j : inbc[i]) {
            if (!v[j]) {
                long t = countbc(j);
                sum += t;
                sumsq += t * t;
            }
        }

        sumsq += ((n - 1) - sum) * ((n - 1) - sum);
        answer[rapind[i]] = ((n - 1) * (n - 1) - sumsq) / 2;

        return sum + 1;
    }

    long countbc(int i) {
        v[i] = true;
        long sum = 0;
        for (int j : inap[i]) {
            if (!u[j]) {
                long t = countap(j);
                sum += t;
            }
        }
        return sum + size[i];
    }

    public void solve() throws IOException {
        in = new BufferedReader(new FileReader("travel.in"));
        PrintWriter out = new PrintWriter(new File("travel.out"));

        n = nextInt();
        int m = nextInt();
        edges = new ArrayList[n];
        for (int i = 0; i < n; i++) {
            edges[i] = new ArrayList<Edge>();
        }
        for (int i = 0; i < m; i++) {
            int s = nextInt() - 1;
            int t = nextInt() - 1;
            Edge e1 = new Edge(s, t);
            Edge e2 = new Edge(t, s);
            e1.r = e2;
            e2.r = e1;
            edges[s].add(e1);
            edges[t].add(e2);
        }

        u = new boolean[n];
        enter = new int[n];
        rett = new int[n];
        ap = new boolean[n];

        dfs(0, true);

        int apn = 0;
        int[] apind = new int[n];

        for (int i = 0; i < n; i++) {
            if (ap[i]) {
                apind[i] = apn++;
            }
        }

        rapind = new int[apn];
        for (int i = 0; i < n; i++) {
            if (ap[i]) {
                rapind[apind[i]] = i;
            }
        }

        v = new boolean[n];
        Arrays.fill(u, false);

        color(0, null);

        inap = new Set[cnum];
        for (int i = 0; i < cnum; i++) {
            inap[i] = new HashSet<Integer>();
        }
        inbc = new Set[apn];
        for (int i = 0; i < apn; i++) {
            inbc[i] = new HashSet<Integer>();
        }

        Set<Integer>[] comps = new Set[cnum];
        for (int i = 0; i < cnum; i++) {
            comps[i] = new HashSet<Integer>();
        }

        for (int i = 0; i < n; i++) {
            for (Edge e : edges[i]) {
                if (ap[e.s]) {
                    inap[e.color - 1].add(apind[e.s]);
                    inbc[apind[e.s]].add(e.color - 1);
                } else {
                    comps[e.color - 1].add(e.s);
                }
                if (ap[e.t]) {
                    inap[e.color - 1].add(apind[e.t]);
                    inbc[apind[e.t]].add(e.color - 1);
                } else {
                    comps[e.color - 1].add(e.t);
                }
            }
        }

        size = new int[n];
        for (int i = 0; i < cnum; i++) {
            size[i] = comps[i].size();
        }

        answer = new long[n];
        Arrays.fill(u, false);
        Arrays.fill(v, false);
        if (apn > 0) {
            countap(0);
        }

        for (int i = 0; i < n; i++) {
            out.println(answer[i] + n - 1);
        }

        in.close();
        out.close();
    }

    public void run() {
        try {
            solve();
        } catch (IOException e) {
            System.exit(64);
        }
    }

    public static void main(String[] arg) throws IOException {
        new Thread(new travel_as()).start();
    }
}
