/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSUpdateRequest : HSRequest {
}
+ (id)requestWithDatabaseRevision:(unsigned)databaseRevision;	// 0x3560cd2d
+ (id)requestWithDatabaseRevision:(unsigned)databaseRevision sessionID:(unsigned)anId;	// 0x3560cd69
- (id)initWithDatabaseRevision:(unsigned)databaseRevision;	// 0x3560cc55
- (id)initWithDatabaseRevision:(unsigned)databaseRevision sessionID:(unsigned)anId;	// 0x3560ccc5
- (id)_bodyDataForDatabaseRevision:(unsigned)databaseRevision sessionID:(unsigned)anId;	// 0x3560ce25
- (id)canonicalResponseForResponse:(id)response;	// 0x3560cda9
@end

