/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSContainersRequest : HSRequest {
	BOOL _shouldParseResponse;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL shouldParseResponse;	// G=0x3551e661; S=0x3551e671; @synthesize=_shouldParseResponse
+ (id)requestWithDatabaseID:(unsigned)databaseID;	// 0x3551e5a5
- (id)initWithAction:(id)action;	// 0x3551e51d
- (id)initWithDatabaseID:(unsigned)databaseID;	// 0x3551e55d
- (id)canonicalResponseForResponse:(id)response;	// 0x3551e5e1
// declared property setter: - (void)setShouldParseResponse:(BOOL)parseResponse;	// 0x3551e671
// declared property getter: - (BOOL)shouldParseResponse;	// 0x3551e661
@end

