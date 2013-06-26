/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

#import <NSObject.h> // Unknown library

@class MediaControlClient;
@protocol OS_dispatch_queue, AirPlayRemoteSlideshowDelegate;

@interface AirPlayRemoteSlideshow : NSObject {
	NSObject<OS_dispatch_queue> *_internalQueue;	// 4 = 0x4
	MediaControlClient *_client;	// 8 = 0x8
	id<AirPlayRemoteSlideshowDelegate> _delegate;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_userQueue;	// 16 = 0x10
	BOOL _started;	// 20 = 0x14
	double _startTime;	// 24 = 0x18
}
@property(assign, nonatomic) id<AirPlayRemoteSlideshowDelegate> delegate;	// G=0x34509211; S=0x34508885; @synthesize=_delegate
- (id)init;	// 0x34508489
- (void)_configureEventHandler;	// 0x34508af1
- (void)dealloc;	// 0x34508809
// declared property getter: - (id)delegate;	// 0x34509211
- (void)getFeaturesWithCompletion:(id)completion;	// 0x34508dad
- (void)getFeaturesWithOptions:(unsigned)options completion:(id)completion;	// 0x34508c75
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34508885
- (void)setDispatchQueue:(id)queue;	// 0x345088a5
- (void)setHost:(id)host;	// 0x34508979
- (void)setPassword:(id)password;	// 0x34508a35
- (void)startWithOptions:(id)options completion:(id)completion;	// 0x34508dc1
- (void)stopWithOptions:(id)options completion:(id)completion;	// 0x34508fd9
@end
