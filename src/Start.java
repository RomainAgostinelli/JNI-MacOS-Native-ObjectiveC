public class Start {

    // load the library
    static {
        System.loadLibrary("osAdapter");
    }

    public static void main(String[] args) {
        OSApiAdapter adapter = new OSApiAdapter();
        // simple use of a native function
        System.out.println(adapter.getOsVersion());
    }
}
