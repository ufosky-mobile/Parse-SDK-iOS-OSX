/**
 * Copyright (c) 2015-present, Parse, LLC.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#import <Parse/PFConstants.h>

#import "PFMacros.h"

@class BFTask PF_GENERIC(__covariant BFGenericType);
@class PFFileManager;
@class PFSQLiteDatabaseResult;

/*!
 Argument count given in executeSQLAsync or executeQueryAsync is invalid.
 */
extern int const PFSQLiteDatabaseInvalidArgumenCountErrorCode;

/*!
 Method `executeSQL` cannot execute SELECT. Use `executeQuery` instead.
 */
extern int const PFSQLiteDatabaseInvalidSQL;

/*!
 Database is opened already.
 */
extern int const PFSQLiteDatabaseDatabaseAlreadyOpened;

/*!
 Database is closed already.
 */
extern int const PFSQLiteDatabaseDatabaseAlreadyClosed;

NS_ASSUME_NONNULL_BEGIN

@interface PFSQLiteDatabase : NSObject

///--------------------------------------
/// @name Init
///--------------------------------------

- (instancetype)initWithPath:(NSString *)path;

///--------------------------------------
/// @name Database Creation
///--------------------------------------

+ (instancetype)databaseWithPath:(NSString *)path;

///--------------------------------------
/// @name Connection
///--------------------------------------

/*!
 @returns A `BFTask` that resolves to `YES` if the database is open.
 */
- (BFTask PF_GENERIC(NSNumber *)*)isOpenAsync;

/*!
 Opens database. Database is one time use. Open > Close > Open is forbidden.
 */
- (BFTask PF_GENERIC(PFVoid) *)openAsync;

/*!
 Closes the database connection.
 */
- (BFTask PF_GENERIC(PFVoid) *)closeAsync;

///--------------------------------------
/// @name Transaction
///--------------------------------------

/*!
 Begins a database transaction in EXCLUSIVE mode.
 */
- (BFTask PF_GENERIC(PFVoid) *)beginTransactionAsync;

/*!
 Commits running transaction.
 */
- (BFTask PF_GENERIC(PFVoid) *)commitAsync;

/*!
 Rollbacks running transaction.
 */
- (BFTask PF_GENERIC(PFVoid) *)rollbackAsync;

///--------------------------------------
/// @name Query Methods
///--------------------------------------

/*!
 Runs a single SQL statement which return result (SELECT).
 */
- (BFTask PF_GENERIC(PFSQLiteDatabaseResult *) *)executeQueryAsync:(NSString *)sql withArgumentsInArray:(nullable NSArray *)args;

/*!
 Runs a single SQL statement, while caching the resulting statement for future use.
 */
- (BFTask PF_GENERIC(PFSQLiteDatabaseResult *)*)executeCachedQueryAsync:(NSString *)sql withArgumentsInArray:(nullable NSArray *)args;

/*!
 Runs a single SQL statement which doesn't return result (UPDATE/INSERT/DELETE).
 */
- (BFTask PF_GENERIC(PFVoid) *)executeSQLAsync:(NSString *)sql withArgumentsInArray:(nullable NSArray *)args;

@end

NS_ASSUME_NONNULL_END
