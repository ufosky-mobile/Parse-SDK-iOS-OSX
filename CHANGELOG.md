# Change Log

## [Unreleased](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/tree/HEAD)

[Full Changelog](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/compare/1.8.1...HEAD)

**Implemented enhancements:**

- Status bar network no longer appears during Parse network activity [\#74](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/74)
- PFTwitterUtils crash [\#68](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/68)
- Not compiling when used with Extensions. [\#43](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/43)
- PFFile Directories Need Clean Up [\#18](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/18)

**Fixed bugs:**

- deleteInBackgroundWithBlock Mac OS X [\#100](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/100)
- Code signing doesn't work on Mac OS with latest XCode version [\#98](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/98)
- PFTwitterUtils silently fails when trying to log in and user has multiple accounts [\#71](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/71)
- PFTwitterUtils and getting user twitter details [\#57](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/57)

**Closed issues:**

- Scheduled Jobs on Cloud Coding is not executing [\#114](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/114)

**Merged pull requests:**

- Add ability to remove all field operations from PFOperationSet. [\#111](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/111) ([nlutsenko](https://github.com/nlutsenko))
- Make sure we compile for App Extensions from source. [\#109](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/109) ([nlutsenko](https://github.com/nlutsenko))
- Fixed assertion messages that were unintentionally changed in \#86. [\#108](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/108) ([richardjrossiii](https://github.com/richardjrossiii))
- Fixed too agressive deallocation for PFObject when fetch/delete is in  progress. [\#104](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/104) ([nlutsenko](https://github.com/nlutsenko))
- Properly specify bundle executable in OS X framework Info.plist. [\#103](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/103) ([nlutsenko](https://github.com/nlutsenko))
- Fix potential infinite recursion on resolving PFObject subclass properties. [\#101](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/101) ([nlutsenko](https://github.com/nlutsenko))
- Updated compiling instructions in the readme. [\#88](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/88) ([nlutsenko](https://github.com/nlutsenko))
- Implemented In-App-Purchase validation using App Store Receipt instead of Transaction Receipt. [\#87](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/87) ([nlutsenko](https://github.com/nlutsenko))
- Cleaned up usages of exceptions and asserts. [\#86](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/86) ([richardjrossiii](https://github.com/richardjrossiii))
- Fix warning in tests. [\#85](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/85) ([nlutsenko](https://github.com/nlutsenko))
- Add automatic management of Network Activity Indicator on iOS. [\#83](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/83) ([nlutsenko](https://github.com/nlutsenko))
- Added NSNotifications being posted on every network request being sent/finished. [\#82](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/82) ([nlutsenko](https://github.com/nlutsenko))
- Added weak/assign value support for PFPropertyInfo, and improved @synthesize detection. [\#81](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/81) ([richardjrossiii](https://github.com/richardjrossiii))
- Fixed presentation of PFAlertView when rootViewController has presentedViewController. [\#80](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/80) ([nlutsenko](https://github.com/nlutsenko))
- Fixed PFAlertView cancel button handling logic. [\#79](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/79) ([nlutsenko](https://github.com/nlutsenko))
- Enable implicit atomicity on properties warning. [\#67](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/67) ([nlutsenko](https://github.com/nlutsenko))
- Add better subclassing support to PFGeoPoint. [\#66](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/66) ([nlutsenko](https://github.com/nlutsenko))
- Add nullability annotations to 100% of public API. [\#65](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/65) ([nlutsenko](https://github.com/nlutsenko))
- Explicitly import Bolts/BFTask to eliminate the need for explicit Bolts import in Swift projects. [\#64](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/64) ([nlutsenko](https://github.com/nlutsenko))
- Remove unused OCMock.framework from copy frameworks stage of ParseUnitTests-iOS. [\#63](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/63) ([nlutsenko](https://github.com/nlutsenko))
- Remove deprecate Parse-OSX.podspec. [\#62](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/62) ([nlutsenko](https://github.com/nlutsenko))

## [1.8.1](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/tree/1.8.1) (2015-08-19)
[Full Changelog](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/compare/1.8.0...1.8.1)

**Implemented enhancements:**

- Probably unused file PFBlockRetryer [\#15](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/15)
- Combine podspecs, using platform-specific settings [\#2](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/2)

**Fixed bugs:**

- PFObject.state causes crash [\#33](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/33)
- Parse 1.8.0 is converting Bool into Numbers [\#27](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/27)
- Adding a property named `state` to a PFObject causes a crash [\#26](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/26)
- BOOL \<-\> Number iOS Parse 1.8.0 [\#13](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/13)

**Closed issues:**

- Session token revoked when I set the current user's password [\#25](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/25)
- Build failure with 'framework not found FBSDKCoreKit for architecture x86\_64' [\#17](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/17)
- Comment - Can't build framework using rakefile [\#14](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/14)
- PFPurchase.buyProduct\(\) not working with Swift [\#9](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/9)
- Push Translation for iOS [\#36](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/36)
- Parse for iOS v1.8.0 breaks localization [\#16](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/issues/16)

**Merged pull requests:**

- Cleanup test assertions descriptions. [\#56](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/56) ([nlutsenko](https://github.com/nlutsenko))
- Update versions for next release \(1.8.1\). [\#55](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/55) ([nlutsenko](https://github.com/nlutsenko))
- Unpublicize localeIdentifier property on PFInstallation. [\#54](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/54) ([nlutsenko](https://github.com/nlutsenko))
- Deprecate Parse-OSX pod, add OS X support to Parse pod. [\#53](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/53) ([nlutsenko](https://github.com/nlutsenko))
- Use static library for OCMock in tests to unbreak Xcode 7. [\#50](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/50) ([nlutsenko](https://github.com/nlutsenko))
- Rename 'ParseOSX.framework' to 'Parse.framework' for OS X. [\#48](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/48) ([nlutsenko](https://github.com/nlutsenko))
- Store original network error under NSUnderlyingError key. [\#46](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/46) ([nlutsenko](https://github.com/nlutsenko))
- Update gemfile. [\#45](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/45) ([nlutsenko](https://github.com/nlutsenko))
- Remove travis bundler caching to improve performance. [\#31](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/31) ([richardjrossiii](https://github.com/richardjrossiii))
- Fixed compiling instructions in README. [\#30](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/30) ([nlutsenko](https://github.com/nlutsenko))
- Fix a crash when receiving a push notification with null sound [\#29](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/29) ([dominikkrejcik](https://github.com/dominikkrejcik))
- Remove unused PFBlockRetryer. [\#24](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/24) ([nlutsenko](https://github.com/nlutsenko))
- Cleanup assertions, convert to macros where possible. [\#22](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/22) ([nlutsenko](https://github.com/nlutsenko))
- Re-add proper boolean support for object subclassing. [\#21](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/21) ([richardjrossiii](https://github.com/richardjrossiii))
- Remove old GHUnit defines. [\#20](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/20) ([nlutsenko](https://github.com/nlutsenko))
- Use only frameworks from OCMock, convert to explicit reference. [\#19](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/19) ([nlutsenko](https://github.com/nlutsenko))
- Disable module autolink setting for Framework targets. [\#10](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/10) ([nlutsenko](https://github.com/nlutsenko))
- Fix typo [\#4](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/4) ([Palleas](https://github.com/Palleas))
- Update coveralls integration. [\#1](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/1) ([nlutsenko](https://github.com/nlutsenko))
- Fixed localization by using a separate table with framework name. [\#38](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/38) ([nlutsenko](https://github.com/nlutsenko))
- Push Translation [\#37](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/37) ([lukas1994](https://github.com/lukas1994))
- Rename PFObject '\_state' instance variable to '\_pfinternal\_state'. [\#35](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/pull/35) ([richardjrossiii](https://github.com/richardjrossiii))

## [1.8.0](https://github.com/ParsePlatform/Parse-SDK-iOS-OSX/tree/1.8.0) (2015-08-13)


\* *This Change Log was automatically generated by [github_changelog_generator](https://github.com/skywinder/Github-Changelog-Generator)*