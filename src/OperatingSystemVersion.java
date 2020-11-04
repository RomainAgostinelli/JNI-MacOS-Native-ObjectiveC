/**
 * This class is a simple POJO used to store a version of OSX.
 * This implementation follow the  implementation by Apple in Foundation/NSProcessInfo.h.
 *
 * @author Romain Agostinelli
 * @see <a href="https://developer.apple.com/documentation/foundation/nsoperatingsystemversion">NSOperatingSystemVersion</a>
 * @since 02.11.2020
 */
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
