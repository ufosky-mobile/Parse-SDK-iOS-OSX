/**
 * Copyright (c) 2015-present, Parse, LLC.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#import "PFDataProvider.h"

@class PFRESTCommand;

NS_ASSUME_NONNULL_BEGIN

@interface PFCommandURLRequestConstructor : NSObject

@property (nonatomic, weak, readonly) id<PFInstallationIdentifierStoreProvider> dataSource;

///--------------------------------------
/// @name Init
///--------------------------------------

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithDataSource:(id<PFInstallationIdentifierStoreProvider>)dataSource NS_DESIGNATED_INITIALIZER;

+ (instancetype)constructorWithDataSource:(id<PFInstallationIdentifierStoreProvider>)dataSource;

///--------------------------------------
/// @name Data
///--------------------------------------

- (NSURLRequest *)dataURLRequestForCommand:(PFRESTCommand *)command;

///--------------------------------------
/// @name File Upload
///--------------------------------------

- (NSURLRequest *)fileUploadURLRequestForCommand:(PFRESTCommand *)command
                                 withContentType:(nullable NSString *)contentType
                           contentSourceFilePath:(NSString *)contentFilePath;

///--------------------------------------
/// @name Headers
///--------------------------------------

+ (NSDictionary *)defaultURLRequestHeadersForApplicationId:(NSString *)applicationId
                                                 clientKey:(NSString *)clientKey
                                                    bundle:(nullable NSBundle *)bundle;

@end

NS_ASSUME_NONNULL_END
