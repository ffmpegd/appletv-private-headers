/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSGetAuthorizedAccountsTokenRequest : HSRequest {
}
+ (id)requestWithDSID:(unsigned long long)dsid deviceGUID:(id)guid;	// 0x3518c4a9
- (id)initWithDSID:(unsigned long long)dsid deviceGUID:(id)guid;	// 0x3518c401
- (id)canonicalResponseForResponse:(id)response;	// 0x3518c4f1
@end

