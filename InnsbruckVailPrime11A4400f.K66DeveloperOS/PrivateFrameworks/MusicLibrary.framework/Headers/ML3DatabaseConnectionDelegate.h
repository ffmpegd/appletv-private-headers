/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "NSObject.h"


@protocol ML3DatabaseConnectionDelegate <NSObject>
@optional
- (void)connection:(id)connection didFailToCloseDatabaseWithError:(id)error;
- (void)connection:(id)connection didFailToOpenDatabaseWithError:(id)error;
- (BOOL)connectionCloseDeletedDatabase:(id)database;
- (void)connectionDidCloseDatabase:(id)connection;
- (void)connectionDidOpenDatabase:(id)connection;
- (void)connectionWillCloseDatabase:(id)connection;
- (void)connectionWillOpenDatabase:(id)connection;
@end
