# Conan 2.0 recipe for Skia

Conan 2.0 recipe for Skia graphics library.

## Usage

You can add this repository as [Local Recipes Index Repository](https://docs.conan.io/2/tutorial/conan_repositories/setup_local_recipes_index.html), or manually `conan create` the recipe at `recipes/skia/all`.

## Version

Currently supports following version:

* `chrome/m126`

Version numbers are formatted as `(chrome milestone version).(checkout date).0`

If you want to support other versions, please open new issue on Github.  

## Requirements

* Since `chrome/m100` Skia requires C++17.

## OS

Tested on following OS (with default options):

| OS            | shared | static |
| ------------- | ------ | ------ |
| Windows       | [x]    | [x]    |
| Macos         | [ ]    | [ ]    |
| Linux         | [x]    | [x]    |
| Android       | [ ]    | [ ]    |
| Emscripten    | [ ]    | [ ]    |

## Bug reports

Please open new issue on Github Issues. 

## License

The Unlicense (Public Domain)
