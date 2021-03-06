/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSPredicate.h> // Unknown library
#import "EventKit-Structs.h"

@class NSString;

@interface EKCalendarItemsWithExternalIdentifierPredicate : NSPredicate {
	NSString *_externalIdentifier;	// 8 = 0x8
}
- (id)initWithCoder:(id)coder;	// 0x35b6676d
- (id)initWithExternalIdentifier:(id)externalIdentifier;	// 0x35b666bd
- (id)copyWithZone:(NSZone *)zone;	// 0x35b66711
- (void)dealloc;	// 0x35b66721
- (void)encodeWithCoder:(id)coder;	// 0x35b667dd
- (BOOL)evaluateWithObject:(id)object;	// 0x35b66839
@end

