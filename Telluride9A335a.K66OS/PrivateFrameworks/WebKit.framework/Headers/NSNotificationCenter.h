/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSNotificationCenter.h> // Unknown library


@interface NSNotificationCenter (WebNSNotificationCenterExtras)
+ (void)_postNotificationName:(id)name;	// 0x347d7945
- (void)postNotificationOnMainThreadWithName:(id)name object:(id)object;	// 0x347d7819
- (void)postNotificationOnMainThreadWithName:(id)name object:(id)object userInfo:(id)info;	// 0x347d7841
- (void)postNotificationOnMainThreadWithName:(id)name object:(id)object userInfo:(id)info waitUntilDone:(BOOL)done;	// 0x347d7865
@end

