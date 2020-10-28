import XCTest
@testable import QDPublisher

final class QDPublisherTests: XCTestCase {
    func testExample() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct
        // results.
        XCTAssertEqual(QDPublisher().text, "Hello, World!")
    }

    static var allTests = [
        ("testExample", testExample),
    ]
}
