/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSUpdateRequest : HSRequest {
}
+ (id)requestWithDatabaseRevision:(unsigned)databaseRevision;	// 0x31071dd1
+ (id)requestWithDatabaseRevision:(unsigned)databaseRevision sessionID:(unsigned)anId;	// 0x31071e0d
- (id)initWithDatabaseRevision:(unsigned)databaseRevision;	// 0x31071cf9
- (id)initWithDatabaseRevision:(unsigned)databaseRevision sessionID:(unsigned)anId;	// 0x31071d69
- (id)_bodyDataForDatabaseRevision:(unsigned)databaseRevision sessionID:(unsigned)anId;	// 0x31071ec9
- (id)canonicalResponseForResponse:(id)response;	// 0x31071e4d
@end

