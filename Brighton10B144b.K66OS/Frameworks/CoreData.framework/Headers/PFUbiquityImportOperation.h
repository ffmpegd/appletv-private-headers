/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSOperation.h> // Unknown library

@class NSLock, NSObject;

@interface PFUbiquityImportOperation : NSOperation {
	NSLock *_delegateLock;	// 12 = 0xc
	BOOL _lockedDelegateLock;	// 16 = 0x10
	NSObject *_delegate;	// 20 = 0x14
}
@property(assign) NSObject *delegate;	// G=0x30fddbc5; S=0x30fddc01; 
- (id)init;	// 0x30fdd965
- (void)cancel;	// 0x30fdda3d
- (void)dealloc;	// 0x30fdd9d9
// declared property getter: - (id)delegate;	// 0x30fddbc5
- (void)lockDelegateLock;	// 0x30fddc41
- (id)retainedDelegate;	// 0x30fddb75
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30fddc01
- (void)unlockDelegateLock;	// 0x30fddc79
@end
