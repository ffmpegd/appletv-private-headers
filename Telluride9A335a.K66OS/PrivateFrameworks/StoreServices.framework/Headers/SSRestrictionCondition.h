/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSProtocolCondition.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SSRestrictionCondition : SSProtocolCondition {
@private
	NSString *_restrictionName;	// 12 = 0xc
}
- (id)initWithDictionary:(id)dictionary;	// 0x30ebd6f5
- (void)dealloc;	// 0x30ebd7a1
- (BOOL)evaluateWithContext:(id)context;	// 0x30ebd7ed
@end

