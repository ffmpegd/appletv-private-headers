/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterInputHelper.h"
#import "AVFoundation-Structs.h"

@class AVFigAssetWriterTrack, AVAssetWriterInputMediaDataRequester;

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper {
	AVFigAssetWriterTrack *_assetWriterTrack;	// 12 = 0xc
	AVAssetWriterInputMediaDataRequester *_mediaDataRequester;	// 16 = 0x10
	CVPixelBufferPoolRef _pixelBufferPool;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=_assetWriterTrack) AVFigAssetWriterTrack *assetWriterTrack;	// G=0x302e664d; @synthesize=_assetWriterTrack
@property(readonly, assign) CVPixelBufferPoolRef pixelBufferPool;	// G=0x302e6525; converted property
+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;	// 0x302e5fe1
- (id)initWithConfigurationState:(id)configurationState;	// 0x302e5b59
- (id)initWithConfigurationState:(id)configurationState assetWriterTrack:(id)track error:(id *)error;	// 0x302e5b79
// declared property getter: - (id)_assetWriterTrack;	// 0x302e664d
- (BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x302e6269
- (BOOL)appendSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x302e6195
- (void)dealloc;	// 0x302e5f29
- (void)finalize;	// 0x302e5f9d
- (BOOL)isReadyForMoreMediaData;	// 0x302e6009
- (void)markAsFinished;	// 0x302e63b9
// converted property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x302e6525
- (void)prepareToEndSession;	// 0x302e6365
- (BOOL)prepareToFinishWritingReturningError:(id *)finishWritingReturningError;	// 0x302e638d
- (void)requestMediaDataWhenReadyOnQueue:(id)queue usingBlock:(id)block;	// 0x302e603d
- (int)status;	// 0x302e5fdd
- (int)trackID;	// 0x302e6419
- (void)transitionToTerminalStatus:(int)terminalStatus;	// 0x302e6441
@end

