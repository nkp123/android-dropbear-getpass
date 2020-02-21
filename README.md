Android Dropbear Builds
=======================

![Build status](https://github.com/ribbons/android-dropbear/workflows/Build/badge.svg)

Build script and configuration to cross-compile
[Dropbear](https://matt.ucc.asn.au/dropbear/dropbear.html) for Android.


Precompiled Binaries
--------------------

armv7a and aarch64 binaries compiled under GitHub Actions are available as
release assets from this repository.


Manual Build
------------

* Ensure that the Android NDK is located at `$ANDROID_NDK_HOME` or
  `$ANDROID_HOME/ndk-bundle`.
* Download and unpack the latest Dropbear source into a subfolder named
  `dropbear`.
* Run `./build`