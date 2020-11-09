public class Start {

    // load the library
    static {
        System.loadLibrary("osAdapter");
    }

    public static void main(String[] args) {
        OSApiAdapter adapter = new OSApiAdapter();
        // simple use of a native function
        try {
            System.out.println(adapter.getOsVersion());
        } catch(NativeException exc) {
            System.out.println(exc.getMessage());
        }
    }
}
