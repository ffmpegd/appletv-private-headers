/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSProtocolCondition.h"

@class NSString;

@interface SSRestrictionCondition : SSProtocolCondition {
@private
	NSString *_restrictionName;	// 12 = 0xc
}
- (id)initWithDictionary:(id)dictionary;	// 0x34e57d79
- (void)dealloc;	// 0x34e57e25
- (BOOL)evaluateWithContext:(id)context;	// 0x34e57e71
@end

