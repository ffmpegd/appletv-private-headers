/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSLocking.h"
#import "Foundation-Structs.h"


@interface NSConditionLock : NSObject <NSLocking> {
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x3193e1e1; S=0x3193e1a5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x3193da3d
- (id)init;	// 0x3193da45
- (id)initWithCondition:(int)condition;	// 0x3193da59
- (int)condition;	// 0x3193dbe1
- (void)dealloc;	// 0x3193dabd
- (id)description;	// 0x3193e0dd
- (void)finalize;	// 0x3193db5d
- (void)lock;	// 0x3193dbed
- (BOOL)lockBeforeDate:(id)date;	// 0x3193dc29
- (void)lockWhenCondition:(int)condition;	// 0x3193dd39
- (BOOL)lockWhenCondition:(int)condition beforeDate:(id)date;	// 0x3193dd79
// converted property getter: - (id)name;	// 0x3193e1e1
// converted property setter: - (void)setName:(id)name;	// 0x3193e1a5
- (BOOL)tryLock;	// 0x3193de91
- (BOOL)tryLockWhenCondition:(int)condition;	// 0x3193dec9
- (void)unlock;	// 0x3193df05
- (void)unlockWithCondition:(int)condition;	// 0x3193dfe9
@end

