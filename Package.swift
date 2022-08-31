// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "DapiSDK",
    products: [https://github.com/MagdyZamel/DapiSPM
        .library(
            name: "Dapi",
            targets: ["Dapi"])
    ],
    targets: [
        .binaryTarget(
            name: "Dapi",
            url: "https://github.com/MagdyZamel/DapiSPM/blob/Master/Dapixcframework.zip",
            checksum: "a61c3dd6481a242f1687809bc484d7220bc044b98d8e816abd15be93f4839683")
    ]
)
