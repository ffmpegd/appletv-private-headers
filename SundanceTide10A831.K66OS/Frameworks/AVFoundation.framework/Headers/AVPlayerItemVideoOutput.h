/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVPlayerItemOutput.h"

@class AVPlayerItemVideoOutputInternal;
@protocol AVPlayerItemOutputPullDelegate, OS_dispatch_queue;

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput {
	AVPlayerItemVideoOutputInternal *_videoOutputInternal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) id<AVPlayerItemOutputPullDelegate> delegate;	// G=0x3425e829; 
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;	// G=0x3425e945; 
@property(assign) BOOL suppressesPlayerRendering;	// G=0x3425f195; S=0x3425f0c5; converted property
- (id)init;	// 0x3425dd39
- (id)initWithPixelBufferAttributes:(id)pixelBufferAttributes;	// 0x3425dd51
- (void)_attachToPlayerItem:(id)playerItem;	// 0x3425e59d
- (void)_detachFromPlayerItem;	// 0x3425e675
- (void)_dispatchOutputMediaDataWillChange;	// 0x3425f525
- (void)_dispatchOutputSequenceWasFlushed;	// 0x3425f641
- (void)_setTagBuffersWithConversionInformation;	// 0x3425f281
- (void)_setTimebase:(OpaqueCMTimebase *)timebase;	// 0x3425f431
- (void)_startObservingTimebaseNotificationsForTimebase:(OpaqueCMTimebase *)timebase;	// 0x3425f3b5
- (void)_stopObservingTimebaseNotificationsForTimebase:(OpaqueCMTimebase *)timebase;	// 0x3425f2c1
- (OpaqueFigVisualContext *)_visualContext;	// 0x3425f2a1
- (CVBufferRef)copyPixelBufferForItemTime:(XXStruct_pwHToB)itemTime itemTimeForDisplay:(XXStruct_pwHToB *)display;	// 0x3425eea1
- (void)dealloc;	// 0x3425e1b5
// declared property getter: - (id)delegate;	// 0x3425e829
// declared property getter: - (id)delegateQueue;	// 0x3425e945
- (void)finalize;	// 0x3425e0d1
- (BOOL)hasNewPixelBufferForItemTime:(XXStruct_pwHToB)itemTime;	// 0x3425ee45
- (XXStruct_pwHToB)itemTimeForHostTime:(double)hostTime;	// 0x3425e2a9
- (XXStruct_pwHToB)itemTimeForMachAbsoluteTime:(long long)machAbsoluteTime;	// 0x3425e4e5
- (void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)advanceInterval;	// 0x3425ea4d
- (void)setDelegate:(id)delegate queue:(id)queue;	// 0x3425e6f5
// converted property setter: - (void)setSuppressesPlayerRendering:(BOOL)rendering;	// 0x3425f0c5
// converted property getter: - (BOOL)suppressesPlayerRendering;	// 0x3425f195
@end
