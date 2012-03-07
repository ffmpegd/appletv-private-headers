/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSLocking.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSConditionLock : NSObject <NSLocking> {
@private
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x336d21f1; S=0x336d21b5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x33679291
- (id)init;	// 0x336d1fd9
- (id)initWithCondition:(int)condition;	// 0x33679299
- (int)condition;	// 0x3367a1c9
- (void)dealloc;	// 0x33679f11
- (id)description;	// 0x336d20e9
- (void)finalize;	// 0x336d1fed
- (void)lock;	// 0x3367a081
- (BOOL)lockBeforeDate:(id)date;	// 0x3367a0bd
- (void)lockWhenCondition:(int)condition;	// 0x33679331
- (BOOL)lockWhenCondition:(int)condition beforeDate:(id)date;	// 0x33679371
// converted property getter: - (id)name;	// 0x336d21f1
// converted property setter: - (void)setName:(id)name;	// 0x336d21b5
- (BOOL)tryLock;	// 0x336d2075
- (BOOL)tryLockWhenCondition:(int)condition;	// 0x336d20ad
- (void)unlock;	// 0x33679e29
- (void)unlockWithCondition:(int)condition;	// 0x33679489
@end

