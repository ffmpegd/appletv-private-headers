/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTAirPlayAgent.h"
#import "AirPlayReceiverUIDelegate.h"
#import "BRFailedURLHandling.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRMediaPlayer, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface LTAirPlayAgent : XXUnknownSuperclass {
	NSMutableDictionary *_failedURLRequests;	// 4 = 0x4
	BOOL _videoPlaybackEnded;	// 8 = 0x8
	BRMediaPlayer *_videoPlayer;	// 12 = 0xc
}
@property(assign) BOOL enabled;	// G=0x5b9b9; S=0x5b9f1; converted property
@property(retain) id name;	// G=0x5ba25; S=0x5ba45; converted property
@property(retain) id password;	// G=0x5ba55; S=0x5ba75; converted property
+ (void)setSingleton:(id)singleton;	// 0x5b8ed
+ (id)singleton;	// 0x5b8dd
- (id)init;	// 0x5b905
- (void).cxx_destruct;	// 0x5ba85
- (void)dealloc;	// 0x5b94d
// converted property getter: - (BOOL)enabled;	// 0x5b9b9
// converted property getter: - (id)name;	// 0x5ba25
// converted property getter: - (id)password;	// 0x5ba55
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x5b9f1
// converted property setter: - (void)setName:(id)name;	// 0x5ba45
// converted property setter: - (void)setPassword:(id)password;	// 0x5ba75
@end

@interface LTAirPlayAgent (Private) <AirPlayReceiverUIDelegate, BRFailedURLHandling>
- (long)_allowInterruption:(id *)interruption;	// 0x5dbd9
- (void)_audioPlayerStateChanged:(id)changed;	// 0x5dc01
- (BOOL)_isFinancialTransactionInProgress;	// 0x5e619
- (long)_setVideoPosition:(float)position;	// 0x5dca5
- (long)_setVideoRate:(float)rate;	// 0x5dd95
- (id)_timedMetadataFromAVTimedMetadata:(id)avtimedMetadata;	// 0x5df35
- (void)_videoMetadataChanged:(id)changed;	// 0x5e215
- (void)_videoPlaybackEnded:(id)ended;	// 0x5e225
- (void)_videoPlaybackError:(id)error;	// 0x5e2b9
- (void)_videoPlayerStateChanged:(id)changed;	// 0x5e4d9
- (void)airplayUIActivity;	// 0x5caa5
- (id)airplayUIGetProperty:(id)property qualifier:(id)qualifier error:(int *)error;	// 0x5bab9
- (long)airplayUIHideProgress;	// 0x5c9e5
- (long)airplayUIPerform:(id)perform inputParams:(id)params outputParams:(id *)params3;	// 0x5c399
- (long)airplayUISetProperty:(id)property qualifier:(id)qualifier value:(id)value;	// 0x5be35
- (long)airplayUIShowProgress;	// 0x5c925
- (long)airplayUIStartAudio:(id)audio outputParams:(id *)params;	// 0x5cb2d
- (long)airplayUIStartPresentation:(id)presentation outputParams:(id *)params;	// 0x5c53d
- (long)airplayUIStartVideo:(id)video outputParams:(id *)params;	// 0x5cead
- (long)airplayUIStopAudio:(id)audio;	// 0x5cd99
- (long)airplayUIStopPresentation:(id)presentation;	// 0x5c859
- (long)airplayUIStopVideo:(id)video;	// 0x5d9e5
- (long)airplayUIUpdateAudioArtwork:(id)artwork mimeType:(id)type artworkData:(id)data;	// 0x5cea1
- (long)airplayUIUpdateAudioProgress:(double)progress totalSeconds:(double)seconds;	// 0x5cea5
- (long)airplayUIUpdateAudioText:(id)text;	// 0x5cea9
- (BOOL)handleFailedURLRequest:(id)request requester:(id)requester;	// 0x5db09
@end
