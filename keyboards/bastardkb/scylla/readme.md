# Scylla

A modern, low-profile split ergonomic keyboard

* Keyboard Maintainer: [Bastard Keyboards](https://github.com/Bastardkb/)
* Hardware Supported: elite-C V4
* Hardware Availability: [Bastard Keyboards](https://bastardkb.com/)

## Building the firmware

**You must specify the shield version when compiling/flashing the firmware.**

The template is:

```shell
qmk compile -kb bastardkb/scylla/{VERSION}/elitec -km {KEYMAP}
```

| Shield Version  | default                                                       |
| --------------- | ------------------------------------------------------------- |
| v2 (Splinky v3) | `qmk compile -kb bastardkb/scylla/v2/splinky_3 -km default`  |

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

See the [keyboard build instructions](https://docs.bastardkb.com)
