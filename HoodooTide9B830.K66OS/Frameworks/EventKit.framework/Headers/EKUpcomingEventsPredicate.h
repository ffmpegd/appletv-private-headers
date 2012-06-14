/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSPredicate.h> // Unknown library
#import "EventKit-Structs.h"


@interface EKUpcomingEventsPredicate : NSPredicate {
	int _limit;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) int limit;	// G=0x3249e821; @synthesize=_limit
+ (id)predicateWithLimit:(int)limit;	// 0x3249e715
- (id)initWithCoder:(id)coder;	// 0x3249e765
- (id)initWithLimit:(int)limit;	// 0x3249e6d5
- (id)copyWithZone:(NSZone *)zone;	// 0x3249e755
- (void)encodeWithCoder:(id)coder;	// 0x3249e7c5
- (BOOL)evaluateWithObject:(id)object;	// 0x3249e751
// declared property getter: - (int)limit;	// 0x3249e821
@end
