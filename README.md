# Conan 2.0 recipe for Skia

Conan 2.0 recipe for Skia graphics library.

## Usage

You can add this repository as [Local Recipes Index Repository](https://docs.conan.io/2/tutorial/conan_repositories/setup_local_recipes_index.html), or manually `conan create` the recipe at `recipes/skia/all`.

## Version

Currently supports following versions:

* `chrome/m140`
    * `140.20251120.0`
* `chrome/m141`
    * `141.20251120.0`
* `chrome/m142`
    * `142.20251120.0`
* `chrome/m143`
    * `143.20260211.0`
* `chrome/m144`
    * `144.20260211.0`
* `chrome/m145`
    * `145.20260211.0`

Version numbers are formatted as `(chrome milestone version).(checkout date).0`

Older version may still work though they're not tested in CI pipelines.
If you need other versions, please open new issue on Github.  

## Requirements

* Since `chrome/m100` Skia requires C++17.

## OS

Tested on following OS (with default options):

| OS            | shared | static |
| ------------- | ------ | ------ |
| Windows         | ![build](https://github.com/mocabe/conan-skia/actions/workflows/windows-latest-shared.yml/badge.svg) | ![build](https://github.com/mocabe/conan-skia/actions/workflows/windows-latest-static.yml/badge.svg) |
| Macos         | ![build](https://github.com/mocabe/conan-skia/actions/workflows/macos-latest-shared.yml/badge.svg) | ![build](https://github.com/mocabe/conan-skia/actions/workflows/macos-latest-static.yml/badge.svg) |
| iOS           | ![build](https://github.com/mocabe/conan-skia/actions/workflows/ios-armv8-shared.yml/badge.svg)    | ![build](https://github.com/mocabe/conan-skia/actions/workflows/ios-armv8-static.yml/badge.svg)    |
| Linux         | ![build](https://github.com/mocabe/conan-skia/actions/workflows/ubuntu-latest-shared.yml/badge.svg) | ![build](https://github.com/mocabe/conan-skia/actions/workflows/ubuntu-latest-static.yml/badge.svg) |
| Android/arm64 | ![build](https://github.com/mocabe/conan-skia/actions/workflows/android-armv8-shared.yml/badge.svg)    | ![build](https://github.com/mocabe/conan-skia/actions/workflows/android-armv8-static.yml/badge.svg)   |
| Android/arm32 | ![build](https://github.com/mocabe/conan-skia/actions/workflows/android-armv7-shared.yml/badge.svg)    | ![build](https://github.com/mocabe/conan-skia/actions/workflows/android-armv7-static.yml/badge.svg)   |
| Emscripten    |  | ![build](https://github.com/mocabe/conan-skia/actions/workflows/emscripten-static.yml/badge.svg)     |

## Bug reports

Please open new issue on Github Issues. 

## License

The Unlicense (Public Domain)
