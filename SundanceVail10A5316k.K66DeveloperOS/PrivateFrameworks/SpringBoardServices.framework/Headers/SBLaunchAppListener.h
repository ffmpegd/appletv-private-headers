/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSLock;

@interface SBLaunchAppListener : NSObject {
@private
	NSString *_displayIdentifier;	// 4 = 0x4
	id _block;	// 8 = 0x8
	NSLock *_lock;	// 12 = 0xc
	BOOL _launched;	// 16 = 0x10
}
+ (BOOL)waitForLaunchThatSpringBoardKnowsAbout:(id)launchThatSpringBoardKnowsAbout timeout:(double)timeout;	// 0x34d0d761
- (id)initWithDisplayIdentifier:(id)displayIdentifier handlerBlock:(id)block;	// 0x34d0d459
- (void)_didLaunch;	// 0x34d0d601
- (void)dealloc;	// 0x34d0d5a1
- (void)invalidate;	// 0x34d0d6cd
@end
