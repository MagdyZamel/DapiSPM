// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "DapiSDK",
    products: [
        .library(
            name: "Dapi",
            targets: ["Dapi"])
    ],
    targets: [
        .binaryTarget(
            name: "Dapi",
            url: "https://raw.githubusercontent.com/MagdyZamel/DapiSPM/Master/archive.zip",
            checksum: "cc32b458d5a4528352100302799af549631b3d860ab0132ee25c0cea0063183c")
    ]
)
