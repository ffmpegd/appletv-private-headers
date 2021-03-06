/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import "IMThreadedWorkUnit.h"

@class NSString;

@interface IMKeychainPasswordFetcher : IMThreadedWorkUnit {
	NSString *_service;	// 28 = 0x1c
	NSString *_username;	// 32 = 0x20
	NSString *_password;	// 36 = 0x24
}
- (id)initWithUsername:(id)username service:(id)service;	// 0x30b6ba71
- (void)_workerThread;	// 0x30b6bae1
- (void)_workerThreadFinished;	// 0x30b6b9a1
- (void)dealloc;	// 0x30b6ba05
@end

