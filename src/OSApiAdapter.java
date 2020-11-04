/**
 * @since 02.11.2020
 * @author Romain Agostinelli
 */
public class OSApiAdapter {
    /**
     * Declaration of the native function implemented in ./native/EntryPointJNI.cpp
     * @return Object OperatingSystemVersion containing the current OS version.
     */
    public native OperatingSystemVersion getOsVersion();
}
