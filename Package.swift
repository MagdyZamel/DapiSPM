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
            url: "https://github.com/MagdyZamel/DapiSPM/blob/Master/Dapixcframework.zip",
            checksum: "160321b25f23184e8e9a9576d06ea025")
    ]
)
