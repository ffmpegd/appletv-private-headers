/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSRecursiveLock;

@interface AVObjectRegistry : NSObject {
	NSMutableSet *_registeredObjects;	// 4 = 0x4
	NSRecursiveLock *_lock;	// 8 = 0x8
}
+ (id)defaultObjectRegistry;	// 0x335c329d
- (id)init;	// 0x335c32e5
- (void)dealloc;	// 0x335d6d2d
- (void)finishedRelease;	// 0x335d6ed1
- (BOOL)isObjectRegistered:(id)registered;	// 0x335c9e61
- (void)registerObject:(id)object;	// 0x335c3371
- (void)registerObjectForSafeRetain:(id)safeRetain;	// 0x335d6d91
- (void)safeInvokeWithDescription:(id)description;	// 0x335cabd9
- (void)safeInvokeWithDescriptionDelayed:(id)descriptionDelayed;	// 0x335cbdb5
- (void)safePerformOnMainThreadTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x335c869d
- (void)safePerformOnMainThreadTarget:(id)target selector:(SEL)selector object:(id)object delay:(double)delay;	// 0x335d6fd5
- (void)safePerformOnThread:(id)thread target:(id)target selector:(SEL)selector object:(id)object;	// 0x335cdd79
- (void)safePerformTarget:(id)target selector:(SEL)selector object:(id)object delay:(double)delay;	// 0x335cbcad
- (void)safePostDelayedNotificationFromMainThreadTarget:(id)mainThreadTarget name:(id)name userInfo:(id)info;	// 0x335cfdd5
- (void)safePostDelayedNotificationFromThread:(id)thread target:(id)target name:(id)name userInfo:(id)info;	// 0x335d7199
- (void)safePostNotificationFromMainThreadTarget:(id)mainThreadTarget name:(id)name userInfo:(id)info;	// 0x335cb705
- (void)safePostNotificationFromThread:(id)thread target:(id)target name:(id)name userInfo:(id)info;	// 0x335d70f1
- (BOOL)safeRetainObject:(id)object;	// 0x335d6e25
- (BOOL)shouldReleaseObject:(id)object requireThread:(id)thread;	// 0x335d6ef1
- (void)unregisterObject:(id)object;	// 0x335cd24d
@end

