public class OperatingSystemVersion {
    private int major;
    private int minor;
    private int patch;

    public OperatingSystemVersion(int major, int minor, int patch) {
        this.major = major;
        this.minor = minor;
        this.patch = patch;
    }

    public int getMajor() {
        return major;
    }

    public int getMinor() {
        return minor;
    }

    public int getPatch() {
        return patch;
    }

    @Override
    public String toString() {
        return "MacOSX: " + major + "." + minor + "." + patch;
    }
}
