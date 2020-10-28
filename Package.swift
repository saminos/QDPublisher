import PackageDescription

let package = Package(
    name: "QDPublisher",
    platforms: [
        .iOS(.v8)
    ],
    products: [
        .library(
            name: "QDPublisher",
            targets: ["QDPublisher"]),
    ],
    dependencies: [],
    targets: [
        .target(
            name: "QDPublisher",
            dependencies: [],
            url: "Core",
            exclude: ["Info.plist"])
    ]
)
