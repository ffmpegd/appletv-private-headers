/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

#import <NSObject.h> // Unknown library
#import "MediaControlSender-Structs.h"

@class MediaControlClient;
@protocol AirPlayRemoteSlideshowDelegate;

@interface AirPlayRemoteSlideshow : NSObject {
	dispatch_queue_s *_internalQueue;	// 4 = 0x4
	MediaControlClient *_client;	// 8 = 0x8
	id<AirPlayRemoteSlideshowDelegate> _delegate;	// 12 = 0xc
	dispatch_queue_s *_userQueue;	// 16 = 0x10
	BOOL _started;	// 20 = 0x14
	double _startTime;	// 24 = 0x18
}
@property(assign, nonatomic) id<AirPlayRemoteSlideshowDelegate> delegate;	// G=0x318713f9; S=0x31871409; @synthesize=_delegate
- (id)init;	// 0x31871781
- (void)_configureEventHandler;	// 0x31871479
- (void)dealloc;	// 0x31871c81
// declared property getter: - (id)delegate;	// 0x318713f9
- (void)getFeaturesWithCompletion:(id)completion;	// 0x31871af5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31871409
- (void)setDispatchQueue:(dispatch_queue_s *)queue;	// 0x31871c09
- (void)setHost:(id)host;	// 0x31871bad
- (void)setPassword:(id)password;	// 0x31871b51
- (void)startWithOptions:(id)options completion:(id)completion;	// 0x318719d5
- (void)stopWithOptions:(id)options completion:(id)completion;	// 0x31871885
@end

