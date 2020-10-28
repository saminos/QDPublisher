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
    dependencies: [
        package(path: ".")
    ],
    targets: [
        .target(
            name: "QDPublisher",
            dependencies: [],
            url: "https://raw.githubusercontent.com/syaifulQ/QDPublisher/main/QDPublisher.xcframework.zip",
            checksum: "ceeca766b4251a2105f78b1fd59d1fb8")
    ]
)
