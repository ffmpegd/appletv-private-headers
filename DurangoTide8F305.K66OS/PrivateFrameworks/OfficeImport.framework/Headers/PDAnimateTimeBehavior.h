/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDCommonBehaviorData.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PDAnimateTimeBehavior : PDCommonBehaviorData {
@private
	NSMutableArray *mTimeAnimateValues;	// 12 = 0xc
}
- (id)init;	// 0x344d46a9
- (void)addTimeAnimateValue:(id)value;	// 0x344d49c1
- (void)dealloc;	// 0x344d4e6d
- (id)timeAnimateValueAtIndex:(int)index;	// 0x345cbaf5
- (int)timeAnimateValueCount;	// 0x345cbb15
@end
