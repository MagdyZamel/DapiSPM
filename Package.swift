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
            checksum: "7f0a8b7a148b0a4bc1a051cd5098a3678b3568308e4d012975e728b76a7239cc")
    ]
)
