/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSUpdateRequest : HSRequest {
}
+ (id)requestWithDatabaseRevision:(unsigned)databaseRevision;	// 0x3551eb7d
+ (id)requestWithDatabaseRevision:(unsigned)databaseRevision sessionID:(unsigned)anId;	// 0x3551ebb9
- (id)initWithDatabaseRevision:(unsigned)databaseRevision;	// 0x3551eaa5
- (id)initWithDatabaseRevision:(unsigned)databaseRevision sessionID:(unsigned)anId;	// 0x3551eb15
- (id)_bodyDataForDatabaseRevision:(unsigned)databaseRevision sessionID:(unsigned)anId;	// 0x3551ec75
- (id)canonicalResponseForResponse:(id)response;	// 0x3551ebf9
@end
