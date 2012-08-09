/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_dispatch_queue;

@interface SSDistributedNotificationCenterObserver : NSObject {
	id _block;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) id block;	// G=0x31945071; @synthesize=_block
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;	// G=0x31945081; @synthesize=_dispatchQueue
@property(readonly, assign, nonatomic) NSString *name;	// G=0x31945091; @synthesize=_name
- (id)initWithName:(id)name queue:(id)queue block:(id)block;	// 0x31944f6d
// declared property getter: - (id)block;	// 0x31945071
- (void)dealloc;	// 0x31944ffd
// declared property getter: - (id)dispatchQueue;	// 0x31945081
// declared property getter: - (id)name;	// 0x31945091
@end
