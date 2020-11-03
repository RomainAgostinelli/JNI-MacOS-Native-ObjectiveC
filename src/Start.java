public class Start {

    static {
        System.loadLibrary("osAdapter");
    }

    public static void main(String[] args) {
        OSApiAdapter adapter = new OSApiAdapter();
        System.out.println(adapter.getOsVersion());
    }
}
