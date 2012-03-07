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
@property(assign, nonatomic) id<AirPlayRemoteSlideshowDelegate> delegate;	// G=0x356aa3f9; S=0x356aa409; @synthesize=_delegate
- (id)init;	// 0x356aa781
- (void)_configureEventHandler;	// 0x356aa479
- (void)dealloc;	// 0x356aac81
// declared property getter: - (id)delegate;	// 0x356aa3f9
- (void)getFeaturesWithCompletion:(id)completion;	// 0x356aaaf5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x356aa409
- (void)setDispatchQueue:(dispatch_queue_s *)queue;	// 0x356aac09
- (void)setHost:(id)host;	// 0x356aabad
- (void)setPassword:(id)password;	// 0x356aab51
- (void)startWithOptions:(id)options completion:(id)completion;	// 0x356aa9d5
- (void)stopWithOptions:(id)options completion:(id)completion;	// 0x356aa885
@end
