/**
 * Copyright (c) 2015-present, Parse, LLC.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

/*!
 This enum is being used to distinguish and encode different types of URL Components.
 Things like Path or Query.

 @warning It currently lacks support for scheme, login, password, fragment
 Whenever new enum type is added - make sure you add support for it to relevant methods.
 */
typedef NS_ENUM(uint8_t, PFURLComponentType)
{
    PFURLComponentTypePath,
    PFURLComponentTypeQuery
};

NS_ASSUME_NONNULL_BEGIN

@interface PFURLConstructor : NSObject

+ (NSURL *)URLFromBaseURL:(NSURL *)baseURL
                     path:(nullable NSString *)path;
+ (NSURL *)URLFromBaseURL:(NSURL *)baseURL
          queryParameters:(nullable NSDictionary *)queryParameters;
+ (NSURL *)URLFromBaseURL:(NSURL *)baseURL
                     path:(nullable NSString *)path
          queryParameters:(nullable NSDictionary *)queryParameters;

+ (NSString *)stringByAddingPercentEscapesToString:(NSString *)string
                               forURLComponentType:(PFURLComponentType)type;

@end

NS_ASSUME_NONNULL_END
