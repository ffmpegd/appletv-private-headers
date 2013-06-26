/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSObject.h> // Unknown library


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
@optional
- (id)debugDescription;
@required
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (LockingAdditions)
+ (void)mf_clearLocks;	// 0x31b23fa5
- (void)_mf_checkToAllowExclusiveLocksWithLock:(id)lock;	// 0x31b24ab5
- (void)_mf_checkToAllowLock:(id)allowLock;	// 0x31b24c95
- (void)_mf_checkToAllowOrderingWithLock:(id)lock;	// 0x31b247b1
- (void)_mf_checkToAllowStrictProgressionWithLock:(id)lock;	// 0x31b24941
- (void)_mf_dumpLockCallStacks:(unsigned)stacks ordering:(id)ordering;	// 0x31b244d5
- (id)_mf_lockOrderingForType:(int)type;	// 0x31b243cd
- (BOOL)_mf_ntsIsLocked;	// 0x31b253bd
- (id)mf_exclusiveLocks;	// 0x31b253e5
- (void)mf_lock;	// 0x31b24cdd
- (id)mf_lockOrdering;	// 0x31b253e1
- (void)mf_lockWithPriority;	// 0x31b25131
- (id)mf_strictLockOrdering;	// 0x31b253dd
- (BOOL)mf_tryLock;	// 0x31b24f95
- (BOOL)mf_tryLockWithPriority;	// 0x31b25155
- (void)mf_unlock;	// 0x31b25179
@end
